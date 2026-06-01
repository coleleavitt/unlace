__int64 __fastcall sub_786DE0(__int64 a1, char *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 *v8; // r14
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  int v13; // eax
  __int64 result; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  __int64 *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // ebx
  __int64 (__fastcall ***v21)(_QWORD, char *); // rdi
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v35; // [rsp+8h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  sub_7862B0((_QWORD *)a1, a2, (int *)&v34);
  if ( v34 <= 3 )
  {
    if ( v34 )
    {
      result = sub_786A40(a1, a2, 0, 0);
      if ( (_DWORD)result )
        return result;
      goto LABEL_34;
    }
LABEL_12:
    v15 = sub_78D450(a2);
    if ( v15 )
    {
      if ( *(_BYTE *)(a1 + 452) || (*(_BYTE *)(v15 + 36) & 4) != 0 )
      {
        v16 = 0xCCCCCCCCCCCCCCCDLL * ((v15 - (__int64)off_2C7C628) >> 3);
        if ( (unsigned __int16)v16 <= 0xFu )
        {
          v17 = *(__int64 **)(a1 + 200);
          *(_BYTE *)(a1 + 212) = v16;
          v18 = v17[1];
          v19 = *v17;
          if ( v17[2] < (unsigned __int64)(v18 + 1) )
          {
            v31 = qvector_reserve(v17, v19, v18 + 1, 1);
            *v17 = v31;
            v19 = v31;
            v18 = v17[1];
          }
          *(_BYTE *)(v19 + v18) = v16;
          ++v17[1];
          ++*(_DWORD *)(a1 + 208);
          return 0;
        }
        else
        {
          sub_784860(a1, 0, v16);
          return 0;
        }
      }
      else
      {
        set_error_string(0, *(_QWORD *)v15);
        return set_qerrno(143);
      }
    }
    v20 = sub_78D170(*(_QWORD *)(a1 + 104), a2);
    if ( v20 != -1 )
    {
      if ( sub_786D30(*(_QWORD **)(a1 + 104), v20, a3) )
      {
        sub_7859A0(a1, 0x10u, v20);
        return 0;
      }
      else
      {
LABEL_11:
        set_error_string(0, a2);
        return set_qerrno(56);
      }
    }
    v21 = *(__int64 (__fastcall ****)(_QWORD, char *))(a1 + 416);
    if ( v21 && (v22 = (**v21)(v21, a2), v23 = v22, v22 != -1) && (get_aflags(v22) & 0x800) != 0 )
    {
      sub_785A20(a1, v23);
    }
    else
    {
      sub_785640(a1, a2, 0);
      v24 = *(__int64 **)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -82;
      v25 = v24[1];
      v26 = *v24;
      if ( v24[2] < (unsigned __int64)(v25 + 1) )
      {
        v33 = qvector_reserve(v24, v26, v25 + 1, 1);
        *v24 = v33;
        v26 = v33;
        v25 = v24[1];
      }
      *(_BYTE *)(v26 + v25) = -82;
      ++v24[1];
      ++*(_DWORD *)(a1 + 208);
    }
LABEL_34:
    v27 = *(__int64 **)(a1 + 200);
    *(_BYTE *)(a1 + 212) = -92;
    v28 = v27[1];
    v29 = *v27;
    if ( v27[2] < (unsigned __int64)(v28 + 1) )
    {
      v32 = qvector_reserve(v27, v29, v28 + 1, 1);
      *v27 = v32;
      v29 = v32;
      v28 = v27[1];
    }
    *(_BYTE *)(v29 + v28) = -92;
    ++v27[1];
    ++*(_DWORD *)(a1 + 208);
    return 0;
  }
  if ( v34 != 5 )
    goto LABEL_12;
  v6 = sub_78D960(*(_QWORD *)(a1 + 104), a2);
  v7 = v6;
  if ( !v6 )
  {
    if ( !under_debugger )
      interr(272);
    BUG();
  }
  v8 = *(__int64 **)(a1 + 200);
  v9 = *(_DWORD *)(v6 + 52);
  *(_BYTE *)(a1 + 212) = -16;
  v10 = v8[1];
  v11 = *v8;
  if ( v8[2] < (unsigned __int64)(v10 + 1) )
  {
    v30 = qvector_reserve(v8, v11, v10 + 1, 1);
    *v8 = v30;
    v11 = v30;
    v10 = v8[1];
  }
  *(_BYTE *)(v11 + v10) = -16;
  ++v8[1];
  ++*(_DWORD *)(a1 + 208);
  sub_7847B0(a1, v9);
  while ( 1 )
  {
    v13 = sub_791D20(v7, v7 + 56);
    if ( v13 != -1 )
    {
      if ( sub_786D30(*(_QWORD **)(a1 + 104), v13, a3 + 1) )
        return 0;
      goto LABEL_11;
    }
    v12 = *(int *)(v7 + 48);
    if ( !(_DWORD)v12 )
      break;
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 104) + 64LL) + 8 * v12);
  }
  if ( a3 )
    goto LABEL_11;
  return 0;
}
