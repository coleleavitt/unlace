__int64 __fastcall sub_8BA070(__int64 *a1, _QWORD *a2)
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
  unsigned int v23; // eax
  char v24; // dl
  __int64 v25; // r13
  __int16 *v26; // rax
  int v27; // edi
  __int64 v28; // rdx
  __int16 v29; // cx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-200h]
  __int64 v35; // [rsp+8h] [rbp-200h]
  __int16 v36; // [rsp+8h] [rbp-200h]
  __int64 v37; // [rsp+10h] [rbp-1F8h]
  __int16 v38; // [rsp+1Ch] [rbp-1ECh]
  int v39; // [rsp+1Ch] [rbp-1ECh]
  char v40; // [rsp+2Fh] [rbp-1D9h] BYREF
  __m128i v41; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v42; // [rsp+40h] [rbp-1C8h]
  char v43; // [rsp+48h] [rbp-1C0h]
  __int64 v44; // [rsp+58h] [rbp-1B0h]
  void *ptr; // [rsp+60h] [rbp-1A8h]
  __int64 v46; // [rsp+68h] [rbp-1A0h]
  _BYTE v47[80]; // [rsp+70h] [rbp-198h] BYREF
  char *v48; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-140h]
  char v50; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a2[3];
  v5 = *a1;
  v6 = a2[7];
  v44 = 0;
  ptr = v47;
  v46 = 0x800000000LL;
  v47[65] = 0;
  v7 = *(_QWORD *)(v5 + 32);
  v43 |= 1u;
  v41 = 0u;
  v42 = 0;
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
  {
    v35 = v7;
    v21 = sub_6C4DA0(*(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8), 1u);
    v6 = a2[7];
    v7 = v35;
    v8 = v21;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
  }
  v9 = sub_823B90(v7, v6, v8, &v41);
  v10 = sub_856400(v9, v5, v4);
  if ( (_BYTE)v10 )
  {
    v10 = sub_8571E0(a2[4], &v40, *a1);
    if ( (_BYTE)v10 )
    {
      if ( v40 )
        v22 = a2[5];
      else
        v22 = a2[6];
      LOBYTE(v23) = sub_89CD60(a1, v22);
      v10 = v23;
      goto LABEL_4;
    }
    v12 = *a1;
    v13 = *(_DWORD *)(*a1 + 48);
    if ( *(_BYTE *)(*a1 + 962) )
    {
      if ( !v13 )
        goto LABEL_4;
      **(_BYTE **)(v12 + 24) = 1;
      v49 = 0x800000000LL;
      v14 = *a1;
      v48 = &v50;
      v15 = *(__int16 **)(v14 + 24);
      v16 = *(_DWORD *)(v14 + 948);
      v17 = *v15;
      v18 = *((_QWORD *)v15 + 1);
      *((_QWORD *)v15 + 1) = &v48;
      v38 = v17;
      v34 = v18;
      *(_DWORD *)(v14 + 948) = *(_DWORD *)(v14 + 40) + 1;
      sub_89CD60(a1, a2[6]);
      v19 = *(_QWORD *)(v14 + 24);
      v20 = (_DWORD)v49 == 0;
      *(_WORD *)v19 = v38;
      if ( v20 )
      {
        *(_QWORD *)(v19 + 8) = v34;
        *(_DWORD *)(v14 + 948) = v16;
      }
      else
      {
        *(_QWORD *)(v19 + 8) = v34;
        *(_DWORD *)(v14 + 948) = v16;
        v25 = *a1;
        v26 = *(__int16 **)(*a1 + 24);
        v27 = *(_DWORD *)(*a1 + 948);
        v28 = *((_QWORD *)v26 + 1);
        v29 = *v26;
        *((_QWORD *)v26 + 1) = &v48;
        v39 = v27;
        v30 = (__int64)v48;
        v36 = v29;
        v31 = 32LL * (unsigned int)v49;
        v37 = v28;
        *(_DWORD *)(v25 + 948) = *(_DWORD *)(v25 + 40) + 1;
        sub_8481D0(v30, v30 + v31);
        v32 = a2[5];
        LODWORD(v49) = 0;
        sub_89CD60(a1, v32);
        v33 = *(_QWORD *)(v25 + 24);
        v20 = (_DWORD)v49 == 0;
        *(_WORD *)v33 = v36;
        if ( !v20 )
        {
          *(_QWORD *)(v33 + 8) = v37;
          *(_DWORD *)(v25 + 948) = v39;
          sub_826230(*a1, (__int64)a2, 2194);
          sub_848050((__int64)&v48);
          goto LABEL_4;
        }
        *(_QWORD *)(v33 + 8) = v37;
        *(_DWORD *)(v25 + 948) = v39;
      }
      sub_848050((__int64)&v48);
      goto LABEL_4;
    }
    if ( v13 )
    {
      v24 = *(_BYTE *)(v12 + 963);
      **(_BYTE **)(v12 + 24) |= v24;
      if ( v24 )
      {
        sub_89CD60(a1, a2[5]);
        sub_89CD60(a1, a2[6]);
      }
    }
  }
LABEL_4:
  if ( ptr != v47 )
    free(ptr);
  return v10;
}

