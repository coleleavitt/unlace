void __fastcall sub_13F3DA0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // r15
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rax
  _BYTE *v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  _QWORD *v11; // rdx
  __int64 v12; // r8
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  _QWORD v16[4]; // [rsp+0h] [rbp-88h] BYREF
  const char *v17; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+28h] [rbp-60h]
  const char *v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h]
  char *v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-40h]

  v2 = *(__int64 **)(a2 + 16);
  v3 = *(__int64 **)(a2 + 8);
  if ( v3 != v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = v3[1];
        v6 = *(_QWORD *)(a1 + 48);
        v8 = (_BYTE *)*v3;
        if ( v7 != 8 )
        {
          if ( v7 != 9 || *(_QWORD *)v8 != 0x756C7073756C7063LL || v8[8] != 115 )
            goto LABEL_7;
          v9 = *(_QWORD *)(a1 + 48);
          v17 = "IOKit";
          v18 = 5;
          v19 = "avc";
          v20 = 3;
          if ( sub_FEF1A0(v9, (__int64)&v17, 2) )
            goto LABEL_8;
LABEL_6:
          v6 = *(_QWORD *)(a1 + 48);
          goto LABEL_7;
        }
        if ( *(_QWORD *)v8 == 0x646564756C637865LL )
          break;
LABEL_7:
        sub_FF4420(
          v6,
          (_BYTE *)*v3,
          v3[1],
          *((_BYTE *)v3 + 20),
          *(unsigned __int8 **)(*(_QWORD *)(a1 + 16) + 16LL),
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL));
LABEL_8:
        v3 += 3;
        if ( v2 == v3 )
          return;
      }
      v5 = *(_QWORD *)(a1 + 48);
      v17 = "Darwin";
      v19 = "C";
      v18 = 6;
      v20 = 1;
      v21 = "excluded";
      v22 = 8;
      if ( !sub_FEF1A0(v5, (__int64)&v17, 3) )
      {
        v16[0] = "Tcl";
        v16[1] = 3;
        v16[2] = "Private";
        v16[3] = 7;
        if ( !sub_FEF1A0(v6, (__int64)v16, 2) )
          goto LABEL_6;
      }
      v10 = *(_QWORD *)(a1 + 48);
      if ( *(_BYTE *)(a1 + 76) )
      {
        v11 = *(_QWORD **)(a1 + 56);
        v12 = *(unsigned int *)(a1 + 68);
        v13 = &v11[v12];
        if ( v11 != v13 )
        {
          v14 = *(_QWORD **)(a1 + 56);
          if ( v10 == *v11 )
            goto LABEL_32;
          while ( v13 != ++v14 )
          {
            if ( v10 == *v14 )
              goto LABEL_32;
          }
        }
        if ( (unsigned int)v12 < *(_DWORD *)(a1 + 64) )
          break;
      }
      v14 = (_QWORD *)sub_2236760(a1 + 56, v10);
      v11 = *(_QWORD **)(a1 + 56);
      if ( *(_BYTE *)(a1 + 76) )
        goto LABEL_32;
      v15 = &v11[*(unsigned int *)(a1 + 64)];
LABEL_24:
      if ( v14 == v15 || (unsigned __int64)(*v14 + 2LL) > 1 )
        goto LABEL_8;
      while ( v15 != ++v14 )
      {
        if ( *v14 < 0xFFFFFFFFFFFFFFFELL )
          goto LABEL_8;
      }
      v3 += 3;
      if ( v2 == v3 )
        return;
    }
    *(_DWORD *)(a1 + 68) = v12 + 1;
    *v13 = v10;
    v11 = *(_QWORD **)(a1 + 56);
    v14 = &v11[v12];
LABEL_32:
    v15 = &v11[*(unsigned int *)(a1 + 68)];
    goto LABEL_24;
  }
}
