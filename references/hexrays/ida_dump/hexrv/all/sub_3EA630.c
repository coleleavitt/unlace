__int64 __fastcall sub_3EA630(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        double a7,
        unsigned int a8)
{
  __int64 v10; // r12
  int v12; // ecx
  __int64 v13; // rdi
  int v14; // esi
  int v17; // ecx
  __int64 v18; // r14
  __int64 v19; // rsi
  int v20; // ecx
  bool v21; // zf
  int v22; // edx
  __int64 v23; // rcx
  int v24; // r15d
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // r15d
  int v29; // r15d
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // r14
  int v33; // r13d
  __int64 v34; // rdx
  __int64 v35; // rax
  int v36; // ebp
  int v37; // r14d
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rsi
  int v41; // r14d
  int v42; // [rsp+Ch] [rbp-3Ch]
  int v43; // [rsp+Ch] [rbp-3Ch]

  v10 = a2;
  v12 = *(unsigned __int16 *)(a1 + 842);
  v13 = a8;
  if ( (((_WORD)v12 - 4) & 0xFFFB) != 0 )
  {
    if ( !under_debugger )
      sub_37DDE0(0xCE46u, (unsigned int)(v12 - 4), a7);
    BUG();
  }
  v14 = (unsigned __int16)v12;
  v17 = 8 * (unsigned __int16)v12;
  v18 = v17;
  if ( a4 >= a5 )
  {
    if ( a4 < v17 )
    {
      v13 = (unsigned int)(a4 - a5);
      v29 = v13 + 1;
      if ( v17 == (_DWORD)v13 + 1 )
      {
        sub_3E8D60(a1, 4u, v14, a3, 0x3BEA45E214ADDC55LL, (int)v10, 0);
        return 1;
      }
      v19 = *(_QWORD *)(a1 + 832);
      v43 = a3;
      v30 = *(_QWORD *)(v19 + 712);
      if ( !a6 )
        goto LABEL_34;
      v31 = v13 + 8;
      if ( v29 >= 0 )
        v31 = v29;
      v13 = v29 & 7 | ((v31 >> 3) - 1) & (unsigned int)(v31 >> 3);
      if ( (_DWORD)v13 )
      {
        v32 = v18 - a4 - 1;
        if ( v30 )
        {
          v33 = *(_DWORD *)(*(_QWORD *)(v19 + 704) + 4 * v30 - 4);
          *(_QWORD *)(v19 + 712) = v30 - 1;
          sub_3E9B00(a1, v32, 2, v33, 1);
          sub_3E8D60(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v43, v33, v10, 0);
          v13 = *(_QWORD *)(a1 + 832);
          sub_3E6F70(v13, v33);
          v34 = *(_QWORD *)(a1 + 832);
          v19 = a5 + v32;
          v35 = *(_QWORD *)(v34 + 712);
          if ( v35 )
          {
            v36 = *(_DWORD *)(*(_QWORD *)(v34 + 704) + 4 * v35 - 4);
            *(_QWORD *)(v34 + 712) = v35 - 1;
            sub_3E9B00(a1, v19, 3, v36, 1);
            sub_3E8D60(a1, 0x18u, *(unsigned __int16 *)(a1 + 842), v10, v36, v10, 0);
            sub_3E6F70(*(_QWORD *)(a1 + 832), v36);
            return 1;
          }
        }
      }
      else
      {
LABEL_34:
        if ( v30 )
        {
          v37 = *(_DWORD *)(*(_QWORD *)(v19 + 704) + 4 * v30 - 4);
          *(_QWORD *)(v19 + 712) = v30 - 1;
          sub_3E9B00(a1, a5, 3, v37, 1);
          sub_3E8D60(a1, 0x17u, *(unsigned __int16 *)(a1 + 842), v43, v37, (int)v10, 0);
          v13 = *(_QWORD *)(a1 + 832);
          v19 = (unsigned int)v37;
          sub_3E6F70(v13, v37);
          v38 = *(_QWORD *)(a1 + 832);
          v39 = *(_QWORD *)(v38 + 712);
          if ( v39 )
          {
            v40 = -1;
            v41 = *(_DWORD *)(*(_QWORD *)(v38 + 704) + 4 * v39 - 4);
            *(_QWORD *)(v38 + 712) = v39 - 1;
            if ( (unsigned __int64)v29 <= 0x3F )
              v40 = (1LL << v29) - 1;
            sub_3E9B00(a1, v40, 1, v41, *(unsigned __int16 *)(a1 + 842));
            sub_3E8D60(a1, 0x14u, *(unsigned __int16 *)(a1 + 842), (int)v10, v41, (int)v10, 0);
            sub_3E6F70(*(_QWORD *)(a1 + 832), v41);
            if ( a6 )
              sub_3EA150(a1, (unsigned int)(v29 / 8), *(unsigned __int16 *)(a1 + 842), v10, v10, 1u, a7);
            return 1;
          }
        }
      }
LABEL_30:
      sub_3E4E50(a7, v13, v19);
    }
  }
  else if ( (_BYTE)a8 == 1 && a5 < v17 )
  {
    v19 = *(_QWORD *)(a1 + 832);
    v20 = a5 + 1 - a4;
    v21 = a4 == 0;
    v22 = 1;
    if ( !v21 )
      v22 = v20;
    v23 = *(_QWORD *)(v19 + 712);
    if ( v23 )
    {
      v42 = a3;
      v24 = *(_DWORD *)(*(_QWORD *)(v19 + 704) + 4 * v23 - 4);
      *(_QWORD *)(v19 + 712) = v23 - 1;
      sub_3E9B00(a1, v18 - v22, 2, v24, 1);
      sub_3E8D60(a1, 0x16u, *(unsigned __int16 *)(a1 + 842), v42, v24, v10, 0);
      v13 = *(_QWORD *)(a1 + 832);
      v19 = (unsigned int)v24;
      sub_3E6F70(v13, v24);
      v25 = *(_QWORD *)(a1 + 832);
      v26 = *(_QWORD *)(v25 + 712);
      if ( v26 )
      {
        v27 = *(_DWORD *)(*(_QWORD *)(v25 + 704) + 4 * v26 - 4);
        *(_QWORD *)(v25 + 712) = v26 - 1;
        sub_3E9B00(a1, v18 - a5 - 1, 3, v27, 1);
        sub_3E8D60(a1, a6 + 23, *(unsigned __int16 *)(a1 + 842), v10, v27, v10, 0);
        sub_3E6F70(*(_QWORD *)(a1 + 832), v27);
        return 1;
      }
    }
    goto LABEL_30;
  }
  return 0;
}
