__int64 __fastcall sub_52E490(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64 *, __int64); // rax
  const char *v6; // rax
  const char *v7; // rbp
  size_t v8; // rax
  size_t v9; // r14
  void *v11; // rdi
  size_t v12; // rdx
  size_t v13; // [rsp+0h] [rbp-60h]
  void *dest; // [rsp+8h] [rbp-58h] BYREF
  __int128 v15; // [rsp+10h] [rbp-50h]
  unsigned __int64 v16; // [rsp+20h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v15 = 0;
  dest = nullptr;
  if ( !a3 )
  {
    LODWORD(v4) = 0;
    return (unsigned int)v4;
  }
  v4 = a1;
  v5 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64))(*a1 + 16LL);
  if ( v5 == sub_52E390 )
  {
    v6 = (const char *)sub_64DFD0(*(_QWORD *)(a1[6] + 1672LL), a1[5], (unsigned int)a2, 0);
    v7 = v6;
    if ( v6 )
    {
      v8 = strlen(v6);
      v9 = v8;
      if ( v8 )
      {
        v11 = dest;
        v12 = v8 + 1;
        if ( *((_QWORD *)&v15 + 1) < v8 + 1 )
        {
          v13 = v8 + 1;
          dest = (void *)qvector_reserve(&dest, dest, v12, 1);
          v12 = v13;
          v11 = dest;
        }
        *(_QWORD *)&v15 = v12;
        memmove(v11, v7, v9);
        *((_BYTE *)dest + v9) = 0;
      }
      else
      {
        *(_QWORD *)&v15 = 0;
      }
      if ( a2 != (unsigned int)get_alias_target(v4[5], (unsigned int)a2) )
        sub_35A910((__int64 *)&dest);
      goto LABEL_8;
    }
  }
  else if ( ((unsigned __int8 (__fastcall *)(_QWORD *, void **, __int64, _QWORD))v5)(a1, &dest, a2, 0) )
  {
LABEL_8:
    LOBYTE(v4) = (unsigned int)sub_65DC60(v4[5], dest, a3, 1) == 0;
    goto LABEL_9;
  }
  LODWORD(v4) = 0;
LABEL_9:
  if ( dest )
  {
    *(_QWORD *)&v15 = 0;
    qfree(dest);
  }
  return (unsigned int)v4;
}
