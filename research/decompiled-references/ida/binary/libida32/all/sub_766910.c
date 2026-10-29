__int64 __fastcall sub_766910(__int64 a1, char *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // r14
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  char *v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 result; // rax
  unsigned __int64 v18; // rbx
  __int64 *v19; // r12
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // ebx
  __int64 (__fastcall ***v23)(_QWORD, char *); // rdi
  unsigned int v24; // eax
  unsigned int v25; // ebx
  __int64 *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned int v36; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v37; // [rsp+8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  sub_765DE0((_QWORD *)a1, a2, (int *)&v36);
  if ( v36 <= 3 )
  {
    if ( v36 )
    {
      result = sub_766570(a1, a2, 0, 0);
      if ( (_DWORD)result )
        return result;
      goto LABEL_35;
    }
LABEL_12:
    v16 = sub_76D010(a2);
    if ( v16 )
    {
      if ( *(_BYTE *)(a1 + 444) || (*(_BYTE *)(v16 + 36) & 4) != 0 )
      {
        v18 = 0xCCCCCCCCCCCCCCCDLL * ((v16 - (__int64)off_2C52608) >> 3);
        if ( (unsigned __int16)v18 <= 0xFu )
        {
          v19 = *(__int64 **)(a1 + 192);
          *(_BYTE *)(a1 + 204) = v18;
          v20 = v19[1];
          v21 = *v19;
          if ( v19[2] < (unsigned __int64)(v20 + 1) )
          {
            v33 = qvector_reserve(v19, v21, v20 + 1, 1);
            *v19 = v33;
            v21 = v33;
            v20 = v19[1];
          }
          *(_BYTE *)(v21 + v20) = v18;
          ++v19[1];
          ++*(_DWORD *)(a1 + 200);
          return 0;
        }
        else
        {
          sub_764420(a1, 0, v18);
          return 0;
        }
      }
      v14 = *(char **)v16;
      set_error_string();
      v15 = 143;
      return set_qerrno(v15, v14);
    }
    v22 = sub_76CD30(*(_QWORD *)(a1 + 96), a2);
    if ( v22 != -1 )
    {
      if ( sub_766860(*(_QWORD **)(a1 + 96), v22, a3) )
      {
        sub_765560(a1, 0x10u, v22);
        return 0;
      }
LABEL_11:
      v14 = a2;
      set_error_string();
      v15 = 56;
      return set_qerrno(v15, v14);
    }
    v23 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 408);
    if ( v23 && (v24 = (**v23)(v23, a2), v25 = v24, v24 != -1) && (get_aflags(v24) & 0x800) != 0 )
    {
      sub_7655E0(a1, v25);
    }
    else
    {
      sub_765200(a1, a2, 0);
      v26 = *(__int64 **)(a1 + 192);
      *(_BYTE *)(a1 + 204) = -82;
      v27 = v26[1];
      v28 = *v26;
      if ( v26[2] < (unsigned __int64)(v27 + 1) )
      {
        v35 = qvector_reserve(v26, v28, v27 + 1, 1);
        *v26 = v35;
        v28 = v35;
        v27 = v26[1];
      }
      *(_BYTE *)(v28 + v27) = -82;
      ++v26[1];
      ++*(_DWORD *)(a1 + 200);
    }
LABEL_35:
    v29 = *(__int64 **)(a1 + 192);
    *(_BYTE *)(a1 + 204) = -92;
    v30 = v29[1];
    v31 = *v29;
    if ( v29[2] < (unsigned __int64)(v30 + 1) )
    {
      v34 = qvector_reserve(v29, v31, v30 + 1, 1);
      *v29 = v34;
      v31 = v34;
      v30 = v29[1];
    }
    *(_BYTE *)(v31 + v30) = -92;
    ++v29[1];
    ++*(_DWORD *)(a1 + 200);
    return 0;
  }
  if ( v36 != 5 )
    goto LABEL_12;
  v6 = sub_76D520(*(_QWORD *)(a1 + 96), a2);
  v7 = v6;
  if ( !v6 )
  {
    if ( !under_debugger )
      interr(272);
    BUG();
  }
  v8 = *(__int64 **)(a1 + 192);
  v9 = *(_DWORD *)(v6 + 52);
  *(_BYTE *)(a1 + 204) = -16;
  v10 = v8[1];
  v11 = *v8;
  if ( v8[2] < (unsigned __int64)(v10 + 1) )
  {
    v32 = qvector_reserve(v8, v11, v10 + 1, 1);
    *v8 = v32;
    v11 = v32;
    v10 = v8[1];
  }
  *(_BYTE *)(v11 + v10) = -16;
  ++v8[1];
  ++*(_DWORD *)(a1 + 200);
  sub_764370(a1, v9);
  while ( 1 )
  {
    v13 = sub_7718E0(v7, v7 + 56);
    if ( v13 != -1 )
    {
      if ( sub_766860(*(_QWORD **)(a1 + 96), v13, a3 + 1) )
        return 0;
      goto LABEL_11;
    }
    v12 = *(int *)(v7 + 48);
    if ( !(_DWORD)v12 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 64LL) + 8 * v12);
  }
  if ( a3 )
    goto LABEL_11;
  return 0;
}

