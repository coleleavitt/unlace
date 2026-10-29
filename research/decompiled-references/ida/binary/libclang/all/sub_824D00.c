__int64 __fastcall sub_824D00(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 *v6; // rax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  bool v11; // r8
  unsigned __int8 v12; // r9
  bool v13; // dl
  __int64 result; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  size_t v17; // r15
  const void *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // rdx
  __int64 v22; // rdx
  char v23; // cl
  char v24; // dl
  int v25; // edx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  int v29; // [rsp+0h] [rbp-D8h]
  int v30; // [rsp+0h] [rbp-D8h]
  int v31; // [rsp+0h] [rbp-D8h]
  __int64 v32; // [rsp+8h] [rbp-D0h]
  const void *v33; // [rsp+8h] [rbp-D0h]
  bool v34; // [rsp+1Fh] [rbp-B9h] BYREF
  _QWORD v35[2]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+30h] [rbp-A8h]
  __int128 v37; // [rsp+38h] [rbp-A0h] BYREF
  void *ptr; // [rsp+48h] [rbp-90h] BYREF
  __int64 v39; // [rsp+50h] [rbp-88h]
  _BYTE v40[128]; // [rsp+58h] [rbp-80h] BYREF

  *(_QWORD *)a1 = sub_6A34D0(a3);
  *(_QWORD *)(a1 + 8) = v5;
  v6 = (__int64 *)sub_6A34F0(a3);
  v7 = 1;
  v8 = *v6;
  *(_BYTE *)(a1 + 128) &= ~2u;
  *(_QWORD *)(a1 + 16) = v8;
  if ( *(_DWORD *)a3 == 7 )
    v7 = !sub_6A3500(a3);
  v36 = v7;
  ptr = v40;
  v39 = 0x800000000LL;
  v37 = 0;
  if ( (v7 & 1) != 0 )
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
  }
  else
  {
    LOBYTE(v36) = (2 * sub_6A34E0(a3)) | v36 & 0xFD;
    v15 = sub_6A3510(a3);
    v17 = 8 * v16;
    v18 = (const void *)v15;
    v19 = (unsigned int)v39;
    v20 = (8 * v16) >> 3;
    v21 = (unsigned int)v39 + v20;
    if ( HIDWORD(v39) < v21 )
    {
      v33 = v18;
      v31 = v20;
      sub_25D6060(&ptr, v40, v21, 8);
      v19 = (unsigned int)v39;
      v18 = v33;
      LODWORD(v20) = v31;
    }
    if ( v17 )
    {
      v29 = v20;
      memcpy((char *)ptr + 8 * v19, v18, v17);
      LODWORD(v19) = v39;
      LODWORD(v20) = v29;
    }
    LODWORD(v39) = v20 + v19;
    v35[0] = sub_6A34D0(a3);
    v35[1] = v22;
    if ( sub_69F610(v35) )
    {
      v34 = 0;
      LOBYTE(v35[0]) = 0;
      v32 = sub_6A3510(a3);
      v30 = v25;
      v26 = sub_6A34D0(a3);
      v28 = sub_824B30(a2, v26, v27, v32, v30, &v37, (__int64 *)&v37 + 1, &v34, v35);
      v11 = v34;
      v12 = v35[0];
      v10 = v28 & 0xFFFFFFF;
      v36 = (16 * v28) | v36 & 0xF;
      v23 = (4 * (v35[0] & 1)) | (8 * v34) | v36 & 0xF3;
      LOBYTE(v36) = v23;
    }
    else
    {
      v23 = v36;
      v10 = v36 >> 4;
      v12 = (v36 & 4) != 0;
      v11 = (v36 & 8) != 0;
    }
    v24 = v23;
    v9 = v37;
    v7 = v23 & 1;
    v13 = (v24 & 2) != 0;
  }
  *(_QWORD *)(a1 + 32) = v9;
  *(_DWORD *)(a1 + 24) = (16 * v10) | (8 * v11) | (4 * v12) | v7 | (2 * v13);
  *(_QWORD *)(a1 + 40) = *((_QWORD *)&v37 + 1);
  sub_820970(a1 + 48, (__int64)&ptr);
  if ( ptr != v40 )
    free(ptr);
  *(_BYTE *)(a1 + 128) = sub_6A3540(a3) & 1 | *(_BYTE *)(a1 + 128) & 0xFE;
  result = *(_BYTE *)(a3 + 4) & 1;
  *(_BYTE *)(a1 + 129) = result;
  return result;
}

