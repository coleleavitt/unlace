void __fastcall sub_13D0D30(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  _BYTE *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned int *v7; // rcx
  unsigned __int8 v8; // al
  void *v9; // rdi
  __int64 v10; // [rsp+0h] [rbp-A8h] BYREF
  int v11; // [rsp+8h] [rbp-A0h]
  __int16 v12; // [rsp+1Eh] [rbp-8Ah] BYREF
  void *ptr; // [rsp+20h] [rbp-88h] BYREF
  signed __int64 v14; // [rsp+28h] [rbp-80h]
  __int64 v15; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int8 *v16[13]; // [rsp+40h] [rbp-68h] BYREF

  v4 = &unk_2611620;
  v10 = a3;
  v5 = 49;
  v11 = a4;
  while ( 1 )
  {
    v6 = v5 >> 1;
    v7 = (unsigned int *)&v4[8 * (v5 >> 1)];
    if ( a2 <= *v7 )
      break;
    v4 = v7 + 2;
    v6 = v5 - v6 - 1;
    if ( v6 <= 0 )
      goto LABEL_6;
LABEL_3:
    v5 = v6;
  }
  if ( v6 )
    goto LABEL_3;
LABEL_6:
  if ( *(_DWORD *)v4 == a2 )
  {
    v8 = v4[4];
    if ( v8 )
    {
      v12 = v8;
      sub_FC70B0((__int64)v16, a1, v10, 1425);
      sub_AEC610((__int64 *)v16, &v10);
      sub_13D0580((__int64)&ptr, a2);
      sub_AEC220(v16, ptr, v14);
      sub_AE9DF0(v16, (__int64)&v12, 1u);
      v9 = ptr;
      if ( ptr != &v15 )
LABEL_9:
        free(v9);
    }
    else
    {
      sub_FC70B0((__int64)v16, a1, v10, 1426);
      sub_AEC610((__int64 *)v16, &v10);
      sub_13D0580((__int64)&ptr, a2);
      sub_AEC220(v16, ptr, v14);
      v9 = ptr;
      if ( ptr != &v15 )
        goto LABEL_9;
    }
    sub_AEA040((__int64)v16);
  }
}
