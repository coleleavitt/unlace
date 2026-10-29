unsigned __int64 __fastcall sub_1B12CB0(
        __int64 *a1,
        const void *a2,
        __int64 a3,
        _WORD *a4,
        unsigned int a5,
        int a6,
        double a7)
{
  __int64 v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int16 v19; // ax
  __int64 v20; // rcx
  _WORD *v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // eax
  char v25; // al
  _QWORD *v26; // rsi
  char v27; // al
  _WORD *v28; // [rsp+0h] [rbp-F0h]
  __int64 v29; // [rsp+0h] [rbp-F0h]
  __int64 v30; // [rsp+0h] [rbp-F0h]
  _QWORD *v31; // [rsp+8h] [rbp-E8h]
  _QWORD *v32; // [rsp+10h] [rbp-E0h]
  bool v33; // [rsp+27h] [rbp-C9h] BYREF
  _BYTE v34[200]; // [rsp+28h] [rbp-C8h] BYREF

  if ( !a4 )
    return 1;
  sub_1AEB8B0(*a1, 0x46u, a4);
  v12 = sub_1AE5FF0(a1[1]);
  if ( !v12 || !*(_DWORD *)(v12 + 1120) )
    goto LABEL_4;
  v18 = sub_EE9D60(v13, 1);
  v19 = *(_WORD *)v18 & 0x1FF;
  if ( v19 == 249 )
  {
    v20 = v18 + 16;
    if ( v18 + 16 != v18 + 8LL * *(unsigned int *)(v18 + 4) + 16 )
    {
      v21 = *(_WORD **)(v18 + 16);
      if ( ((*v21 + 351) & 0x1FFu) <= 0x4B )
      {
        v26 = (_QWORD *)(v18 + 16);
        while ( 1 )
        {
          v32 = (_QWORD *)v20;
          v31 = v26;
          v30 = v18;
          v27 = sub_FFEA60(*((unsigned int *)v21 + 2), (__int64)v26, (__int64)v21, v20);
          v18 = v30;
          v20 = (__int64)v32;
          if ( !v27 )
            break;
          if ( v26 != v32 )
          {
            v18 = *(v26 - 1);
            goto LABEL_10;
          }
          ++v26;
          if ( v31 + 1 == (_QWORD *)(v30 + 8LL * *(unsigned int *)(v30 + 4) + 16) )
            goto LABEL_4;
          v21 = (_WORD *)*v26;
          if ( ((*(_WORD *)*v26 + 351) & 0x1FFu) > 0x4B )
            goto LABEL_9;
        }
        v21 = (_WORD *)*v26;
      }
LABEL_9:
      v18 = (__int64)v21;
      goto LABEL_10;
    }
LABEL_4:
    v14 = (_QWORD *)sub_168B6C0((__int64)a1);
    return sub_F005E0(v14, a5, a6, a2, a3, (__int64)a4);
  }
  if ( ((v19 + 351) & 0x1FFu) <= 0x4B )
  {
    v29 = v18;
    v25 = sub_FFEA60(*(unsigned int *)(v18 + 8), 1, v16, v17);
    v18 = v29;
    if ( v25 )
      goto LABEL_4;
  }
LABEL_10:
  v28 = (_WORD *)v18;
  sub_168B9F0((__int64)v34, a1, a5, 0x120Eu, 0);
  sub_15F7200(v34);
  v22 = sub_1AE5FF0(a1[1]);
  v23 = 0;
  if ( v22 )
    v23 = *(_DWORD *)(v22 + 1120);
  sub_168B9F0((__int64)v34, a1, v23, 0x1824u, 0);
  sub_15F7200(v34);
  v24 = sub_EEB7E0((unsigned __int64)v28, (__int64)a1, a7);
  sub_168B9F0((__int64)v34, a1, v24, 0x1823u, 0);
  v33 = ((*v28 + 351) & 0x1FFu) <= 0x4B;
  sub_1588420((__int64)v34, (unsigned __int8 *)&v33);
  sub_15F7200(v34);
  return 1;
}
