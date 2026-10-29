__int64 __fastcall sub_C245D0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rax
  char v8; // dl
  __int64 v9; // rax
  bool v10; // zf
  __int64 v11; // rsi
  int v12; // edi
  bool v13; // r8
  char v14; // r9
  bool v15; // cl
  char v16; // al
  char v17; // dl
  __int64 result; // rax
  const void *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  size_t v22; // r8
  __int64 v23; // r15
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int v26; // edx
  unsigned int v27; // r15d
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // [rsp+0h] [rbp-D8h]
  size_t v32; // [rsp+0h] [rbp-D8h]
  const void *v33; // [rsp+8h] [rbp-D0h]
  bool v34; // [rsp+1Fh] [rbp-B9h] BYREF
  _QWORD v35[2]; // [rsp+20h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+30h] [rbp-A8h]
  __int64 v37; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+40h] [rbp-98h] BYREF
  void *ptr; // [rsp+48h] [rbp-90h] BYREF
  __int64 v40; // [rsp+50h] [rbp-88h]
  _BYTE v41[128]; // [rsp+58h] [rbp-80h] BYREF

  v5 = sub_A51060(a3);
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)a1 = v5;
  v7 = (__int64 *)sub_A51080(a3);
  v8 = 1;
  v9 = *v7;
  *(_BYTE *)(a1 + 128) &= ~2u;
  *(_QWORD *)(a1 + 16) = v9;
  if ( *(_DWORD *)a3 == 7 )
    v8 = !sub_A51090(a3);
  v37 = 0;
  ptr = v41;
  v40 = 0x800000000LL;
  LOBYTE(v36) = v8 & 1 | v36 & 0xFE;
  v10 = (v36 & 1) == 0;
  v36 &= 1u;
  v38 = 0;
  if ( v10 )
  {
    LOBYTE(v36) = (2 * sub_A51070(a3)) | v36 & 0xFD;
    v19 = (const void *)sub_A510A0(a3);
    v20 = (unsigned int)v40;
    v22 = 8 * v21;
    v23 = (8 * v21) >> 3;
    v24 = (unsigned int)v40 + v23;
    if ( v24 > HIDWORD(v40) )
    {
      v32 = v22;
      v33 = v19;
      sub_2237220(&ptr, v41, v24, 8);
      v20 = (unsigned int)v40;
      v19 = v33;
      v22 = v32;
    }
    if ( v22 )
    {
      memcpy((char *)ptr + 8 * v20, v19, v22);
      LODWORD(v20) = v40;
    }
    LODWORD(v40) = v20 + v23;
    v35[0] = sub_A51060(a3);
    v35[1] = v25;
    if ( sub_A4F700(v35) )
    {
      v34 = 0;
      LOBYTE(v35[0]) = 0;
      v31 = sub_A510A0(a3);
      v27 = v26;
      v28 = sub_A51060(a3);
      v30 = sub_C134E0(a2, v28, v29, v31, v27, &v37, &v38, &v34, v35);
      v13 = v34;
      v14 = v35[0];
      v12 = v30 & 0xFFFFFFF;
      v36 = (16 * v30) | v36 & 0xF;
      v11 = v37;
      LOBYTE(v36) = (4 * (v35[0] & 1)) | (8 * v34) | v36 & 0xF3;
      v8 = v36 & 1;
      v15 = (v36 & 2) != 0;
    }
    else
    {
      v11 = v37;
      v8 = v36 & 1;
      v13 = (v36 & 8) != 0;
      v15 = (v36 & 2) != 0;
      v14 = (v36 & 4) != 0;
      v12 = v36 >> 4;
    }
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
  }
  v16 = v8;
  v17 = *(_BYTE *)(a1 + 24) & 0xFC;
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v38;
  *(_BYTE *)(a1 + 24) = (8 * v13) | (4 * (v14 & 1)) | (2 * v15) & 0xF3 | v16 & 1 | v17 & 0xF3;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 24) & 0xF | (16 * v12);
  sub_C240D0((char ***)(a1 + 48), (char ***)&ptr);
  if ( ptr != v41 )
    free(ptr);
  *(_BYTE *)(a1 + 128) = sub_A510C0(a3) & 1 | *(_BYTE *)(a1 + 128) & 0xFE;
  result = *(_BYTE *)(a3 + 4) & 1;
  *(_BYTE *)(a1 + 129) = result;
  return result;
}
