unsigned __int64 __fastcall sub_EEEE10(__int64 a1, __int64 a2)
{
  int v2; // r13d
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rax
  int v9; // r13d
  unsigned __int16 v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  int v13; // r13d
  __int64 v14; // rbx
  int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // ebp
  __int64 v21; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r12d
  int v27; // ebp
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  int v33; // r14d
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rcx
  __int64 v36; // rax
  int v37; // r13d
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // r12
  int v41; // ebx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rbx
  int v45; // eax
  __int64 v46; // rcx
  __int64 v47; // rbx
  int v48; // ebp
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // r13d
  unsigned __int16 v52; // r13
  __int64 v53; // rbx
  __int64 v54; // rax
  int v55; // r13d
  unsigned __int64 v56; // [rsp+8h] [rbp-30h]
  unsigned __int64 v57; // [rsp+8h] [rbp-30h]
  int v58; // [rsp+8h] [rbp-30h]
  int v59; // [rsp+8h] [rbp-30h]

  v2 = 0;
  v4 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  v5 = *(unsigned int *)(v4 + 8);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(v4 + 12) )
  {
    sub_22134E0(*(_QWORD *)(a1 + 8), v4 + 16, v5 + 1, 4);
    v5 = *(unsigned int *)(v4 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v4 + 4 * v5) = v2;
  ++*(_DWORD *)(v4 + 8);
  v6 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 16) )
  {
    if ( a2 )
    {
      v7 = *(_BYTE *)(a2 + 28) & 0x7F;
      switch ( v7 )
      {
        case '/':
          v8 = *(unsigned int *)(v6 + 8);
          v9 = *(_DWORD *)(a2 + 68) & 0xFFFFF;
          if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
          {
            sub_22134E0(*(_QWORD *)(a1 + 8), v6 + 16, v8 + 1, 4);
            v8 = *(unsigned int *)(v6 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v6 + 4 * v8) = v9;
          v10 = *(_WORD *)(a2 + 70);
          ++*(_DWORD *)(v6 + 8);
          v11 = *(_QWORD *)(a1 + 8);
          v12 = *(unsigned int *)(v11 + 8);
          v13 = v10 >> 4;
          if ( v12 + 1 > (unsigned __int64)*(unsigned int *)(v11 + 12) )
          {
            sub_22134E0(*(_QWORD *)(a1 + 8), v11 + 16, v12 + 1, 4);
            v12 = *(unsigned int *)(v11 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v11 + 4 * v12) = v13;
          ++*(_DWORD *)(v11 + 8);
          v14 = *(_QWORD *)(a1 + 8);
          v15 = *(unsigned __int8 *)(a2 + 80);
          v16 = *(unsigned int *)(v14 + 8);
          if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(v14 + 12) )
          {
            sub_22134E0(*(_QWORD *)(a1 + 8), v14 + 16, v16 + 1, 4);
            v16 = *(unsigned int *)(v14 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v14 + 4 * v16) = v15;
          v17 = *(_QWORD *)(a1 + 24);
          ++*(_DWORD *)(v14 + 8);
          v18 = sub_A91B20(v17, *(_QWORD *)(a2 + 48));
          if ( *(_BYTE *)(a1 + 16) && (v18 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            v18 = *(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                | ((unsigned __int8)*(_QWORD *)&byte_8[v18 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v18) & 7;
          v19 = *(_QWORD *)(a1 + 8);
          v20 = v18;
          v21 = *(unsigned int *)(v19 + 8);
          if ( v21 + 1 > (unsigned __int64)*(unsigned int *)(v19 + 12) )
          {
            v56 = v18;
            sub_22134E0(*(_QWORD *)(a1 + 8), v19 + 16, v21 + 1, 4);
            v21 = *(unsigned int *)(v19 + 8);
            v18 = v56;
          }
          result = HIDWORD(v18);
          *(_DWORD *)(*(_QWORD *)v19 + 4 * v21) = v20;
          v23 = *(unsigned int *)(v19 + 12);
          v24 = (unsigned int)(*(_DWORD *)(v19 + 8) + 1);
          *(_DWORD *)(v19 + 8) = v24;
          if ( v24 + 1 > v23 )
          {
            v57 = result;
            sub_22134E0(v19, v19 + 16, v24 + 1, 4);
            v24 = *(unsigned int *)(v19 + 8);
            result = v57;
          }
          *(_DWORD *)(*(_QWORD *)v19 + 4 * v24) = result;
          ++*(_DWORD *)(v19 + 8);
          return result;
        case '+':
          v31 = *(_QWORD *)(a2 + 48);
          if ( (v31 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v49 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
            v31 = v49 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v49 | (unsigned __int8)v31) & 7;
          }
          v32 = *(unsigned int *)(v6 + 8);
          v33 = v31;
          if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
          {
            sub_22134E0(*(_QWORD *)(a1 + 8), v6 + 16, v32 + 1, 4);
            v32 = *(unsigned int *)(v6 + 8);
          }
          v34 = HIDWORD(v31);
          *(_DWORD *)(*(_QWORD *)v6 + 4 * v32) = v33;
          v35 = *(unsigned int *)(v6 + 12);
          v36 = (unsigned int)(*(_DWORD *)(v6 + 8) + 1);
          *(_DWORD *)(v6 + 8) = v36;
          if ( v36 + 1 > v35 )
          {
            sub_22134E0(v6, v6 + 16, v36 + 1, 4);
            v36 = *(unsigned int *)(v6 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v6 + 4 * v36) = v34;
          v37 = 0;
          ++*(_DWORD *)(v6 + 8);
          v38 = *(_QWORD *)(a1 + 8);
          if ( (*(_BYTE *)(a2 + 97) & 0x10) == 0 )
            v37 = (*(_DWORD *)(a2 + 96) >> 13) & 0x7F;
          v39 = *(unsigned int *)(v38 + 8);
          if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(v38 + 12) )
          {
            sub_22134E0(*(_QWORD *)(a1 + 8), v38 + 16, v39 + 1, 4);
            v39 = *(unsigned int *)(v38 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v38 + 4 * v39) = v37;
          v40 = *(_QWORD *)(a1 + 8);
          ++*(_DWORD *)(v38 + 8);
          v41 = (unsigned __int8)(*(_WORD *)(a2 + 98) >> 4);
          if ( v41 == 255 )
            v41 = sub_B50B40(a2);
          result = *(unsigned int *)(v40 + 8);
          if ( result + 1 > *(unsigned int *)(v40 + 12) )
          {
            sub_22134E0(v40, v40 + 16, result + 1, 4);
            result = *(unsigned int *)(v40 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v40 + 4 * result) = v41;
          ++*(_DWORD *)(v40 + 8);
          return result;
        case 'C':
          v42 = sub_B9A850(a2);
          v43 = *(unsigned int *)(v6 + 8);
          if ( v43 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
          {
            v59 = v42;
            sub_22134E0(v6, v6 + 16, v43 + 1, 4);
            v43 = *(unsigned int *)(v6 + 8);
            v42 = v59;
          }
          *(_DWORD *)(*(_QWORD *)v6 + 4 * v43) = v42;
          ++*(_DWORD *)(v6 + 8);
          v44 = *(_QWORD *)(a1 + 8);
          v45 = sub_B9A870(a2);
          v46 = *(unsigned int *)(v44 + 8);
          if ( v46 + 1 > (unsigned __int64)*(unsigned int *)(v44 + 12) )
          {
            v58 = v45;
            sub_22134E0(v44, v44 + 16, v46 + 1, 4);
            v46 = *(unsigned int *)(v44 + 8);
            v45 = v58;
          }
          *(_DWORD *)(*(_QWORD *)v44 + 4 * v46) = v45;
          ++*(_DWORD *)(v44 + 8);
          v47 = *(_QWORD *)(a1 + 8);
          v48 = (unsigned __int8)sub_B9A890(a2);
LABEL_52:
          result = *(unsigned int *)(v47 + 8);
          if ( result + 1 > *(unsigned int *)(v47 + 12) )
          {
            sub_22134E0(v47, v47 + 16, result + 1, 4);
            result = *(unsigned int *)(v47 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v47 + 4 * result) = v48;
          ++*(_DWORD *)(v47 + 8);
          return result;
        case 'D':
          v50 = *(unsigned int *)(v6 + 8);
          v51 = *(_DWORD *)(a2 + 64) & 0xFFFFF;
          if ( v50 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
          {
            sub_22134E0(*(_QWORD *)(a1 + 8), v6 + 16, v50 + 1, 4);
            v50 = *(unsigned int *)(v6 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v6 + 4 * v50) = v51;
          v52 = *(_WORD *)(a2 + 66);
          ++*(_DWORD *)(v6 + 8);
          v53 = *(_QWORD *)(a1 + 8);
          v54 = *(unsigned int *)(v53 + 8);
          v55 = v52 >> 4;
          if ( v54 + 1 > (unsigned __int64)*(unsigned int *)(v53 + 12) )
          {
            sub_22134E0(*(_QWORD *)(a1 + 8), v53 + 16, v54 + 1, 4);
            v54 = *(unsigned int *)(v53 + 8);
          }
          *(_DWORD *)(*(_QWORD *)v53 + 4 * v54) = v55;
          ++*(_DWORD *)(v53 + 8);
          v47 = *(_QWORD *)(a1 + 8);
          v48 = (*(_BYTE *)(a2 + 80) & 2) != 0;
          goto LABEL_52;
      }
      goto LABEL_23;
    }
LABEL_45:
    v27 = 0;
    v26 = 0;
    goto LABEL_24;
  }
  if ( !a2 )
    goto LABEL_45;
LABEL_23:
  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v26 = v25;
  v27 = HIDWORD(v25);
LABEL_24:
  v28 = *(unsigned int *)(v6 + 8);
  if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(v6 + 12) )
  {
    sub_22134E0(v6, v6 + 16, v28 + 1, 4);
    v28 = *(unsigned int *)(v6 + 8);
  }
  *(_DWORD *)(*(_QWORD *)v6 + 4 * v28) = v26;
  v29 = (unsigned int)(*(_DWORD *)(v6 + 8) + 1);
  v30 = *(unsigned int *)(v6 + 12);
  *(_DWORD *)(v6 + 8) = v29;
  if ( v29 + 1 > v30 )
  {
    sub_22134E0(v6, v6 + 16, v29 + 1, 4);
    v29 = *(unsigned int *)(v6 + 8);
  }
  result = *(_QWORD *)v6;
  *(_DWORD *)(*(_QWORD *)v6 + 4 * v29) = v27;
  ++*(_DWORD *)(v6 + 8);
  return result;
}

