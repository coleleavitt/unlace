__int64 __fastcall sub_516060(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *, __int64); // rax
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r14
  void *v11; // rdi
  size_t v12; // r15
  void *dest; // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  dest = nullptr;
  v14 = 0;
  if ( !a3 )
  {
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v4 = a1;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*a1 + 16LL);
  if ( v5 == sub_515F60 )
  {
    v6 = (const char *)sub_6309B0(*(_QWORD *)(a1[6] + 1480LL), a1[5], a2, 0);
    v7 = v6;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = v8;
      if ( v8 )
      {
        v11 = dest;
        v12 = v8 + 1;
        if ( *((_QWORD *)&v14 + 1) < v8 + 1 )
        {
          dest = (void *)qvector_reserve(&dest, dest, v8 + 1, 1);
          v11 = dest;
        }
        *(_QWORD *)&v14 = v12;
        memmove(v11, v7, v9);
        *((_BYTE *)dest + v9) = 0;
      }
      else
      {
        *(_QWORD *)&v14 = 0;
      }
      if ( a2 != (unsigned int)get_alias_target(v4[5], a2) )
        sub_357520((__int64 *)&dest);
      goto LABEL_8;
    }
  }
  else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, void **, _QWORD, _QWORD))v5)(a1, &dest, a2, 0) )
  {
LABEL_8:
    LOBYTE(v4) = (unsigned int)sub_640380(v4[5], dest, a3, 1) == 0;
    goto LABEL_9;
  }
  LODWORD(v4) = 0;
LABEL_9:
  if ( dest )
  {
    *(_QWORD *)&v14 = 0;
    qfree(dest);
  }
  return (unsigned int)v4;
}

