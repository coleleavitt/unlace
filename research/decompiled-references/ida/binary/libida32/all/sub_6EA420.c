__int64 __fastcall sub_6EA420(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128i a4,
        double a5,
        __m128 a6,
        double a7,
        double a8,
        double a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  char v17; // bp
  _QWORD *v18; // r12
  double v19; // xmm4_8
  double v20; // xmm5_8
  unsigned __int64 v21; // r14
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  _DWORD **v24; // rdi
  _DWORD **v25; // r15
  _DWORD *v26; // rdi
  int v27; // eax
  __int64 result; // rax
  _QWORD *v29; // rdi
  unsigned __int64 v30; // rdi

  v10 = sub_B9F920(a2);
  v11 = *(_QWORD *)(v10 + 16) + 8LL * *(unsigned int *)(v10 + 24);
  v14 = *(_QWORD *)(sub_B9F920(a2) + 16);
  if ( v14 != v11 )
  {
    while ( 1 )
    {
      v17 = 0;
      v18 = sub_6E4E40(
              (__int64 *)(*(_QWORD *)(*(_QWORD *)v14 + 80LL) + 72LL),
              *(_QWORD *)(*(_QWORD *)v14 + 80LL),
              v12,
              v13,
              v15,
              v16);
      v21 = (unsigned __int64)v18;
      if ( v18 )
        break;
LABEL_16:
      v14 += 8;
      if ( v11 == v14 )
        return 1;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(v21 + 140) & 7u) <= 1 )
      {
        result = sub_6E9260(a1, v21, a3, a4, a5, a6, v19, v20, a9, a10);
        if ( !(_BYTE)result )
          return result;
        v22 = *(_QWORD *)(v21 + 72);
        if ( (v22 & 1) == 0 )
          goto LABEL_21;
LABEL_5:
        if ( v17 )
          goto LABEL_16;
        v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v22 & 1) != 0 )
        {
          v17 = 1;
          goto LABEL_8;
        }
LABEL_29:
        if ( v23 <= 3 )
        {
          v17 = 1;
          v21 = v22 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_14:
          if ( v18 == (_QWORD *)v21 || !v21 )
            goto LABEL_16;
        }
        else
        {
          v29 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v23 & 2) != 0 )
          {
            v17 = 1;
LABEL_34:
            v30 = sub_6C1EC0(v29, v21, v12, v13, v15, v16);
            v23 = v30 & 0xFFFFFFFFFFFFFFFELL;
            v22 = v30 | 1;
            *(_QWORD *)(v21 + 72) = v22;
LABEL_8:
            if ( !v23 )
              goto LABEL_16;
LABEL_9:
            v24 = (_DWORD **)(v22 & 0xFFFFFFFFFFFFFFF8LL);
            v25 = v24;
            if ( (v23 & 4) != 0 )
            {
              if ( !v24 )
                goto LABEL_16;
              v26 = *v24;
              v27 = v26[3];
              if ( *((_DWORD *)v25 + 2) != v27 )
              {
                *((_DWORD *)v25 + 2) = v27;
                (*(void (__fastcall **)(_DWORD *, unsigned __int64))(*(_QWORD *)v26 + 152LL))(v26, v21);
              }
              v21 = (unsigned __int64)v25[2];
            }
            else
            {
              v21 = (unsigned __int64)v24;
            }
            goto LABEL_14;
          }
          if ( v18 == v29 )
            goto LABEL_16;
          v21 = (unsigned __int64)v29;
          v17 = 1;
        }
      }
      else
      {
        v22 = *(_QWORD *)(v21 + 72);
        if ( (v22 & 1) != 0 )
          goto LABEL_5;
LABEL_21:
        if ( (v22 & 2) != 0 )
        {
          if ( v17 )
            goto LABEL_16;
          v17 = 1;
          v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
          if ( (v22 & 1) != 0 )
            goto LABEL_9;
          goto LABEL_29;
        }
        v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
        if ( (v22 & 1) != 0 )
          goto LABEL_8;
        if ( v23 <= 3 )
          goto LABEL_16;
        v29 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v23 & 2) != 0 )
          goto LABEL_34;
        if ( v18 == v29 )
          goto LABEL_16;
        v21 = (unsigned __int64)v29;
      }
    }
  }
  return 1;
}

