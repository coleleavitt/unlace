__int64 __fastcall sub_14F7960(__int64 a1, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  bool v6; // zf
  _QWORD *v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // rax
  int v10; // r15d
  unsigned __int64 v11; // rdx
  __int16 v12; // ax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  _DWORD *v19; // rsi
  unsigned __int64 v20; // [rsp+8h] [rbp-120h]
  void *v21; // [rsp+10h] [rbp-118h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-110h]
  unsigned int v23; // [rsp+1Ch] [rbp-10Ch]
  _DWORD v24[4]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v25[80]; // [rsp+30h] [rbp-F8h] BYREF
  void *ptr; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+88h] [rbp-A0h]
  _QWORD v28[19]; // [rsp+90h] [rbp-98h] BYREF

  v3 = sub_14B6F80(a1, 0);
  if ( v3 == 1 )
    return 1;
  v6 = *(_WORD *)(a1 + 32) == 73;
  v7 = v28;
  v28[0] = v3 & 0xFFFFFFFFFFFFFFFELL;
  v21 = v24;
  v23 = 4;
  ptr = v28;
  v24[0] = a2;
  v22 = 1;
  v27 = 0xC00000001LL;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v8, (int *)(a1 + 16));
      v9 = v22;
      v10 = *(_DWORD *)(a1 + 40);
      v11 = v22 + 1LL;
      if ( v11 > v23 )
      {
        sub_2237220(&v21, v24, v11, 4);
        v9 = v22;
      }
      *((_DWORD *)v21 + v9) = v10;
      v12 = *(_WORD *)(a1 + 32);
      ++v22;
      if ( (unsigned __int16)(v12 - 14) > 1u && (unsigned __int16)(v12 - 17) > 2u )
      {
        v13 = a1;
        v14 = a1 + 16;
        v4 = 1;
        sub_1564840(v25, v13, v14, 1756);
        sub_AEA040((__int64)v25);
        goto LABEL_10;
      }
      v15 = sub_14B6F80(a1, 0);
      if ( v15 == 1 )
        break;
      v16 = (unsigned int)v27;
      v17 = v15 & 0xFFFFFFFFFFFFFFFELL;
      v18 = (unsigned int)v27 + 1LL;
      if ( v18 > HIDWORD(v27) )
      {
        v20 = v17;
        sub_2237220(&ptr, v28, v18, 8);
        v16 = (unsigned int)v27;
        v17 = v20;
      }
      *((_QWORD *)ptr + v16) = v17;
      v6 = *(_WORD *)(a1 + 32) == 73;
      LODWORD(v27) = v27 + 1;
      if ( !v6 )
      {
        v19 = v21;
        v7 = ptr;
        goto LABEL_19;
      }
    }
    v4 = 1;
  }
  else
  {
    v19 = v24;
LABEL_19:
    v4 = sub_19DB770(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 736LL), v19, v7);
  }
LABEL_10:
  if ( ptr != v28 )
    free(ptr);
  if ( v21 != v24 )
    free(v21);
  return v4;
}
