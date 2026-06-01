void __fastcall sub_2040CA0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  void (*v4)(); // rax
  _DWORD *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i v21; // [rsp+0h] [rbp-98h] BYREF
  bool v22; // [rsp+10h] [rbp-88h]
  bool v23; // [rsp+11h] [rbp-87h]
  __int64 v24; // [rsp+18h] [rbp-80h]
  __int64 v25; // [rsp+20h] [rbp-78h]
  __int64 v26; // [rsp+28h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+60h] [rbp-38h]

  if ( *(_BYTE *)a2 == 85 )
  {
    v10 = *(_QWORD *)(a2 - 32);
    if ( v10 )
    {
      if ( *(_BYTE *)v10 == 13 && (*(_BYTE *)(v10 + 33) & 0x20) != 0 && *(_DWORD *)(v10 + 36) == 149 )
      {
        sub_995540(*a1, " ; (");
        v11 = sub_2091480(a2);
        sub_2040820(a1, v11, v12, v13, v14, v15);
        sub_995540(*a1, ", ");
        v16 = sub_20915D0(a2);
        sub_2040820(a1, v16, v17, v18, v19, v20);
        sub_995540(*a1, ")");
      }
    }
  }
  v3 = a1[28];
  if ( v3 )
  {
    v4 = *(void (**)())(*(_QWORD *)v3 + 48LL);
    if ( v4 != nullsub_1277 )
      ((void (__fastcall *)(__int64, __int64, __int64))v4)(v3, a2, *a1);
  }
  if ( byte_2CFC7B8 )
  {
    if ( *(_BYTE *)a2 <= 0x1Cu )
      goto LABEL_14;
    if ( !*(_QWORD *)(a2 + 48) )
    {
      if ( !byte_2CFC6F8 )
        goto LABEL_14;
      goto LABEL_11;
    }
    sub_995540(*a1, " ; ");
    sub_208B3A0(a2 + 48, *a1);
  }
  if ( !byte_2CFC6F8 || *(_BYTE *)a2 <= 0x1Cu )
    goto LABEL_14;
LABEL_11:
  if ( (*(_BYTE *)(a2 + 7) & 0x20) != 0 )
  {
    v5 = (_DWORD *)sub_20AF750(a2, 2);
    if ( v5 )
    {
      sub_995540(*a1, " ; ");
      v6 = a1[1];
      v7 = *a1;
      v8 = *(unsigned __int8 *)v5;
      v21.m128i_i64[1] = 0;
      v24 = v6;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v22 = v6 != 0;
      v21.m128i_i64[0] = (__int64)&off_2BE5CC8;
      v23 = (unsigned int)(v8 - 5) <= 0x20;
      v28 = 0;
      sub_203FB60(v7, v5, &v21, v6, 0, 0);
      sub_202F1D0(&v21);
    }
  }
LABEL_14:
  if ( byte_2CFC878 )
  {
    v9 = sub_995540(*a1, " ; ");
    sub_227B9B0(v9, a2);
  }
}
