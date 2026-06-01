__int64 __fastcall sub_7CAA80(__int64 a1, __int64 a2)
{
  char *v2; // r14
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  unsigned int v4; // eax
  unsigned int v5; // ebx
  char *s1; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  s1 = nullptr;
  v8 = 0;
  sub_851530(&s1);
  if ( (_QWORD)v8 )
  {
    v2 = s1;
    if ( !strcmp(s1, "hvui") )
    {
      if ( v2 )
      {
        *(_QWORD *)&v8 = 0;
        qfree(v2);
        s1 = nullptr;
        *((_QWORD *)&v8 + 1) = 0;
      }
      if ( (*(_BYTE *)(a1 + 169) & 2) != 0 )
        goto LABEL_6;
LABEL_15:
      v5 = sub_7CA780((const char *)a1, a2);
      vcred_reg_del_store_info();
      goto LABEL_9;
    }
  }
  set_registry_name("hvui");
  if ( (*(_BYTE *)(a1 + 169) & 2) == 0 )
    goto LABEL_15;
LABEL_6:
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL);
  if ( v3 == j__vcred_write )
    v4 = vcred_write(a1, a2);
  else
    v4 = v3(a1, a2);
  v5 = v4;
  vcred_reg_set_store_info(1u);
LABEL_9:
  if ( (unsigned __int64)v8 > 1 )
    set_registry_name(s1);
  if ( s1 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(s1);
  }
  return v5;
}
