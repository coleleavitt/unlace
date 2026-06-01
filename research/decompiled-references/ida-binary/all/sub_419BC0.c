__int64 __fastcall vault_with_events_t__::vfunc_27(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // r9
  __int64 (*v8)(); // rax
  const char *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  char v16; // al
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v18; // [rsp+10h] [rbp-48h]
  unsigned int v19; // [rsp+1Ch] [rbp-3Ch]
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int128 v21; // [rsp+28h] [rbp-30h]
  unsigned __int64 v22; // [rsp+38h] [rbp-20h]

  v22 = __readfsqword(0x28u);
  v6 = a1[1];
  if ( !v6 )
    goto LABEL_12;
  v7 = (unsigned int)a5;
  v8 = *(__int64 (**)())(*(_QWORD *)v6 + 480LL);
  if ( v8 == sub_178B60 )
    goto LABEL_3;
  v18 = a4;
  v17 = a3;
  v19 = a5;
  v16 = ((__int64 (__fastcall *)(__int64, __int64 (*)(), __int64, __int64, __int64, _QWORD))v8)(
          v6,
          sub_178B60,
          a3,
          a4,
          a5,
          (unsigned int)a5);
  a3 = v17;
  a4 = v18;
  v7 = v19;
  if ( v16 )
  {
LABEL_12:
    LODWORD(v9) = 52;
    return (unsigned int)v9;
  }
  v6 = a1[1];
LABEL_3:
  v20 = 0;
  v21 = 0;
  v9 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 184LL))(
                       v6,
                       &v20,
                       a2,
                       a3,
                       a4,
                       v7);
  (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*a1 + 24LL))(a1, v9, &v20);
  v10 = v20;
  if ( v20 )
  {
    v11 = v21;
    if ( (_QWORD)v21 )
    {
      v12 = 0;
      do
      {
        v13 = v10 + 32 * v12;
        v14 = *(_QWORD *)(v13 + 8);
        if ( v14 )
        {
          *(_QWORD *)(v13 + 16) = 0;
          qfree(v14, v9);
          v10 = v20;
        }
        ++v12;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v10, v9);
  }
  return (unsigned int)v9;
}
