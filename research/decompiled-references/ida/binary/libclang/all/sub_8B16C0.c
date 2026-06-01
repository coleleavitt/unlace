__int64 __fastcall sub_8B16C0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r13
  __int16 *v15; // rax
  int v16; // edi
  __int16 v17; // cx
  __int64 v18; // rdx
  __int64 v19; // rax
  bool v20; // zf
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  char v23; // dl
  __int64 v24; // r13
  __int16 *v25; // rax
  int v26; // edi
  __int64 v27; // rdx
  __int16 v28; // cx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-200h]
  __int64 v34; // [rsp+8h] [rbp-200h]
  __int16 v35; // [rsp+8h] [rbp-200h]
  __int64 v36; // [rsp+10h] [rbp-1F8h]
  __int16 v37; // [rsp+1Ch] [rbp-1ECh]
  int v38; // [rsp+1Ch] [rbp-1ECh]
  char v39; // [rsp+2Fh] [rbp-1D9h] BYREF
  __m128i v40; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v41; // [rsp+40h] [rbp-1C8h]
  char v42; // [rsp+48h] [rbp-1C0h]
  __int64 v43; // [rsp+58h] [rbp-1B0h]
  void *ptr; // [rsp+60h] [rbp-1A8h]
  __int64 v45; // [rsp+68h] [rbp-1A0h]
  _BYTE v46[80]; // [rsp+70h] [rbp-198h] BYREF
  char *v47; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v48; // [rsp+C8h] [rbp-140h]
  char v49; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a2[3];
  v5 = *a1;
  v6 = a2[7];
  v43 = 0;
  ptr = v46;
  v45 = 0x800000000LL;
  v46[65] = 0;
  v7 = *(_QWORD *)(v5 + 32);
  v42 |= 1u;
  v40 = 0u;
  v41 = 0;
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
  {
    v34 = v7;
    v21 = sub_6C4DA0(*(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8), 1u);
    v6 = a2[7];
    v7 = v34;
    v8 = v21;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
  }
  v9 = sub_823B90(v7, v6, v8, &v40);
  v10 = sub_856400(v9, v5, v4);
  if ( (_BYTE)v10 )
  {
    v10 = sub_8571E0(a2[4], &v39, *a1);
    if ( (_BYTE)v10 )
    {
      if ( v39 )
        v22 = a2[5];
      else
        v22 = a2[6];
      v10 = sub_8ADEA0(a1, v22);
      goto LABEL_4;
    }
    v12 = *a1;
    v13 = *(_DWORD *)(*a1 + 48);
    if ( *(_BYTE *)(*a1 + 962) )
    {
      if ( !v13 )
        goto LABEL_4;
      **(_BYTE **)(v12 + 24) = 1;
      v48 = 0x800000000LL;
      v14 = *a1;
      v47 = &v49;
      v15 = *(__int16 **)(v14 + 24);
      v16 = *(_DWORD *)(v14 + 948);
      v17 = *v15;
      v18 = *((_QWORD *)v15 + 1);
      *((_QWORD *)v15 + 1) = &v47;
      v37 = v17;
      v33 = v18;
      *(_DWORD *)(v14 + 948) = *(_DWORD *)(v14 + 40) + 1;
      sub_8ADEA0(a1, a2[6]);
      v19 = *(_QWORD *)(v14 + 24);
      v20 = (_DWORD)v48 == 0;
      *(_WORD *)v19 = v37;
      if ( v20 )
      {
        *(_QWORD *)(v19 + 8) = v33;
        *(_DWORD *)(v14 + 948) = v16;
      }
      else
      {
        *(_QWORD *)(v19 + 8) = v33;
        *(_DWORD *)(v14 + 948) = v16;
        v24 = *a1;
        v25 = *(__int16 **)(*a1 + 24);
        v26 = *(_DWORD *)(*a1 + 948);
        v27 = *((_QWORD *)v25 + 1);
        v28 = *v25;
        *((_QWORD *)v25 + 1) = &v47;
        v38 = v26;
        v29 = (__int64)v47;
        v35 = v28;
        v30 = 32LL * (unsigned int)v48;
        v36 = v27;
        *(_DWORD *)(v24 + 948) = *(_DWORD *)(v24 + 40) + 1;
        sub_8481D0(v29, v29 + v30);
        v31 = a2[5];
        LODWORD(v48) = 0;
        sub_8ADEA0(a1, v31);
        v32 = *(_QWORD *)(v24 + 24);
        v20 = (_DWORD)v48 == 0;
        *(_WORD *)v32 = v35;
        if ( !v20 )
        {
          *(_QWORD *)(v32 + 8) = v36;
          *(_DWORD *)(v24 + 948) = v38;
          sub_826D30(*a1, (__int64)a2, 2194);
          sub_848050((__int64)&v47);
          goto LABEL_4;
        }
        *(_QWORD *)(v32 + 8) = v36;
        *(_DWORD *)(v24 + 948) = v38;
      }
      sub_848050((__int64)&v47);
      goto LABEL_4;
    }
    if ( v13 )
    {
      v23 = *(_BYTE *)(v12 + 963);
      **(_BYTE **)(v12 + 24) |= v23;
      if ( v23 )
      {
        sub_8ADEA0(a1, a2[5]);
        sub_8ADEA0(a1, a2[6]);
      }
    }
  }
LABEL_4:
  if ( ptr != v46 )
    free(ptr);
  return v10;
}

