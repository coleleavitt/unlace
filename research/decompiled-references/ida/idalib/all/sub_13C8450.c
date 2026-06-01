__int64 __fastcall sub_13C8450(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned int v5; // r14d
  char *v9; // rax
  unsigned __int64 v10; // rdx
  _QWORD *v11; // r12
  unsigned int v12; // edx
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int8 v17; // cl
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned int v26; // esi
  __int64 v27; // rax
  __int64 v28; // rdi
  unsigned int v29; // edx
  __int64 v30; // rbp
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rax
  unsigned int v37; // esi
  __int64 v38; // rdx
  bool v39; // zf
  int v40; // r10d
  __int64 v41; // r11
  int v42; // ecx
  int v43; // r10d
  int v44; // ebx
  unsigned int v45; // [rsp+0h] [rbp-98h]
  __int64 **v46; // [rsp+0h] [rbp-98h]
  __int64 v48; // [rsp+28h] [rbp-70h] BYREF
  __int64 v49[2]; // [rsp+30h] [rbp-68h] BYREF
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  __int64 v51; // [rsp+48h] [rbp-50h]
  _BYTE v52[72]; // [rsp+50h] [rbp-48h] BYREF

  v5 = 0;
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 280LL) & 2) == 0 )
    return v5;
  v51 = 0x200000000LL;
  ptr = v52;
  v45 = a5;
  while ( 1 )
  {
    v9 = (char *)sub_228A4B0(a2, a3, 0);
    a2 = v9;
    a3 = v10;
    if ( !v10 )
      break;
    sub_FD9440((__int64)v49, *(_QWORD *)(a1 + 40), v9, v10, 1);
    v11 = (_QWORD *)sub_A05D80(v49);
    v5 = v12;
    if ( !(_BYTE)v12 )
    {
      sub_A04D70(v49);
      goto LABEL_6;
    }
    sub_A04D70(v49);
    if ( !v11 )
      break;
    v14 = sub_228AB90(v11 + 4, *v11, 0);
    v17 = 0;
    if ( v18 == 10 )
    {
      if ( *(_QWORD *)v14 != 0x6F77656D6172662ELL || (v19 = 0, *(_WORD *)(v14 + 8) != 27506) )
        v19 = 1;
      v17 = v19 ^ 1;
    }
    if ( (unsigned int)sub_13C8080(a1, v11, v45, v17, v15, v16) <= 1 )
    {
      v26 = *(_DWORD *)(a1 + 1312);
      v46 = (__int64 **)(a1 + 1296);
      v27 = v11[1];
      v48 = v27;
      if ( !v26 )
      {
        v49[0] = 0;
        goto LABEL_46;
      }
      v22 = v26 - 1;
      v28 = *(_QWORD *)(a1 + 1296);
      v29 = v22 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
      v30 = v28 + 24LL * v29;
      v21 = *(_QWORD *)v30;
      if ( v27 == *(_QWORD *)v30 )
        goto LABEL_24;
      v43 = 1;
      v23 = 0;
      if ( v21 == -4096 )
      {
LABEL_40:
        v44 = *(_DWORD *)(a1 + 1304);
        v21 = 3 * v26;
        v49[0] = v30;
        v20 = (unsigned int)(v44 + 1);
        if ( 4 * (int)v20 < (unsigned int)v21 )
        {
          v21 = v26 - *(_DWORD *)(a1 + 1308) - (unsigned int)v20;
          if ( (unsigned int)v21 > v26 >> 3 )
            goto LABEL_42;
          goto LABEL_47;
        }
LABEL_46:
        v26 *= 2;
LABEL_47:
        sub_13C6EC0(v46, v26, v20, v21, v22, v23);
        sub_13C2A70((__int64 *)v46, &v48, v49);
        v27 = v48;
        v30 = v49[0];
        LODWORD(v20) = *(_DWORD *)(a1 + 1304) + 1;
LABEL_42:
        v39 = *(_QWORD *)v30 == -4096;
        *(_DWORD *)(a1 + 1304) = v20;
        if ( !v39 )
          --*(_DWORD *)(a1 + 1308);
        *(_QWORD *)v30 = v27;
        *(_DWORD *)(v30 + 16) = 0;
        *(_QWORD *)(v30 + 8) = 0;
      }
      else
      {
        while ( 1 )
        {
          if ( !v23 && v21 == -8192 )
            v23 = v30;
          v29 = v22 & (v43 + v29);
          v30 = v28 + 24LL * v29;
          v21 = *(_QWORD *)v30;
          if ( v27 == *(_QWORD *)v30 )
            break;
          if ( v21 == -4096 )
          {
            if ( v23 )
              v30 = v23;
            goto LABEL_40;
          }
          ++v43;
        }
      }
LABEL_24:
      v31 = v30 + 8;
      if ( !(_DWORD)v51 )
        goto LABEL_6;
      v32 = 0;
      v33 = 8LL * (unsigned int)(v51 - 1) + 8;
      while ( 2 )
      {
        v37 = *(_DWORD *)(a1 + 1312);
        v38 = *(_QWORD *)(*(_QWORD *)((char *)ptr + v32) + 8LL);
        v48 = v38;
        if ( !v37 )
        {
          v49[0] = 0;
          goto LABEL_30;
        }
        v23 = v37 - 1;
        v22 = *(_QWORD *)(a1 + 1296);
        v21 = (unsigned int)v23 & (((unsigned int)v38 >> 9) ^ ((unsigned int)v38 >> 4));
        v34 = v22 + 24 * v21;
        v35 = *(_QWORD *)v34;
        if ( v38 == *(_QWORD *)v34 )
        {
LABEL_27:
          v36 = v34 + 8;
          v32 += 8;
          *(_QWORD *)v36 = *(_QWORD *)v31;
          *(_DWORD *)(v36 + 8) = *(_DWORD *)(v31 + 8);
          if ( v33 == v32 )
            goto LABEL_6;
          continue;
        }
        break;
      }
      v40 = 1;
      v41 = 0;
      if ( v35 != -4096 )
      {
        while ( 1 )
        {
          if ( v35 == -8192 && !v41 )
            v41 = v34;
          v21 = (unsigned int)v23 & (v40 + (_DWORD)v21);
          v34 = v22 + 24LL * (unsigned int)v21;
          v35 = *(_QWORD *)v34;
          if ( v38 == *(_QWORD *)v34 )
            goto LABEL_27;
          if ( v35 == -4096 )
          {
            if ( v41 )
              v34 = v41;
            break;
          }
          ++v40;
        }
      }
      v42 = *(_DWORD *)(a1 + 1304);
      v49[0] = v34;
      v21 = (unsigned int)(v42 + 1);
      v22 = (unsigned int)(4 * v21);
      if ( (unsigned int)v22 < 3 * v37 )
      {
        v22 = v37 >> 3;
        if ( v37 - *(_DWORD *)(a1 + 1308) - (unsigned int)v21 <= (unsigned int)v22 )
        {
LABEL_31:
          sub_13C6EC0(v46, v37, v38, v21, v22, v23);
          sub_13C2A70((__int64 *)v46, &v48, v49);
          v38 = v48;
          v21 = (unsigned int)(*(_DWORD *)(a1 + 1304) + 1);
          v34 = v49[0];
        }
        v39 = *(_QWORD *)v34 == -4096;
        *(_DWORD *)(a1 + 1304) = v21;
        if ( !v39 )
          --*(_DWORD *)(a1 + 1308);
        *(_QWORD *)v34 = v38;
        *(_DWORD *)(v34 + 16) = 0;
        *(_QWORD *)(v34 + 8) = 0;
        goto LABEL_27;
      }
LABEL_30:
      v37 *= 2;
      goto LABEL_31;
    }
    if ( a4 == v11[1] )
      break;
    v24 = (unsigned int)v51;
    v25 = (unsigned int)v51 + 1LL;
    if ( v25 > HIDWORD(v51) )
    {
      sub_2237220(&ptr, v52, v25, 8);
      v24 = (unsigned int)v51;
    }
    *((_QWORD *)ptr + v24) = v11;
    LODWORD(v51) = v51 + 1;
  }
  v5 = 0;
LABEL_6:
  if ( ptr != v52 )
    free(ptr);
  return v5;
}
