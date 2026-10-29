unsigned __int64 __fastcall sub_4D15F0(QT::QSplitter **a1, __int64 a2)
{
  __int64 v3; // r12
  __int64 (__fastcall *v4)(__int64); // rax
  int v5; // eax
  int v7; // r12d
  __int64 (__fastcall *v8)(__int64, QT::QWidget *); // rax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // r8
  int v15; // r14d
  int *v16; // rax
  __int64 v17; // rax
  _BYTE *v18; // rcx
  _BYTE *v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r13d
  double v23; // xmm3_8
  int v24; // r14d
  __int64 v25; // r12
  __int64 v26; // rcx
  double v27; // xmm0_8
  int v28; // edx
  __int64 v29; // [rsp+8h] [rbp-A0h]
  int v30; // [rsp+2Ch] [rbp-7Ch] BYREF
  void *v31; // [rsp+30h] [rbp-78h] BYREF
  __int64 v32; // [rsp+38h] [rbp-70h]
  __int64 v33; // [rsp+40h] [rbp-68h]
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int64 v35; // [rsp+58h] [rbp-50h]
  __int64 v36; // [rsp+60h] [rbp-48h]
  unsigned __int64 v37; // [rsp+68h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  QT::QSplitter::sizes((QT::QSplitter *)&v31);
  if ( *(_DWORD *)(a2 + 40) == 1 )
  {
    if ( a2 )
    {
      v7 = QT::QSplitter::orientation(*(QT::QSplitter **)(a2 + 104));
      if ( (unsigned int)QT::QSplitter::orientation(a1[13]) == v7 )
      {
        v8 = *((__int64 (__fastcall **)(__int64, QT::QWidget *))*a1 + 56);
        v9 = v8 == sub_4C4740 ? QT::QSplitter::indexOf(a1[13], (QT::QWidget *)a2) : v8((__int64)a1, (QT::QWidget *)a2);
        v12 = v9;
        if ( v9 >= 0 )
        {
          v13 = v9;
          if ( v9 < v33 )
          {
            if ( !v31 || *(int *)v31 > 1 )
              sub_187120((__int64)&v31, 0, 0, 0, v10, v11);
            v14 = 4 * v13;
            v15 = *(_DWORD *)(v32 + 4 * v13);
            if ( v15 > 0 )
            {
              v16 = (int *)v31;
              if ( !v31 || *(int *)v31 > 1 )
              {
                sub_187120((__int64)&v31, 0, 0, 0, v14, v11);
                v16 = (int *)v31;
                v14 = 4 * v13;
              }
              if ( !v16 || *v16 > 1 )
              {
                v29 = v14;
                sub_187120((__int64)&v31, 0, 0, 0, v14, v11);
                v14 = v29;
              }
              v17 = v33;
              v18 = (_BYTE *)(v32 + 4 * v33);
              v19 = (_BYTE *)(v32 + v14 + 4);
              if ( v32 == v32 + v14 )
              {
                if ( v18 != v19 )
                  v32 += v14 + 4;
              }
              else if ( v18 != v19 )
              {
                memmove((void *)(v32 + v14), v19, v18 - v19);
                v17 = v33;
              }
              v33 = v17 - 1;
              if ( !v31 || *(int *)v31 > 1 )
                sub_187120((__int64)&v31, 0, 0, 0, v14, v11);
              QT::QSplitter::sizes((QT::QSplitter *)&ptr);
              if ( (int)v36 > 0 )
              {
                v22 = v12 + v36;
                v23 = (double)v15;
                v24 = v12;
                v25 = 0;
                do
                {
                  v26 = *(_QWORD *)(a2 + 32);
                  v27 = 0.0;
                  v28 = *(_DWORD *)(v26 + 28) + 1 - *(_DWORD *)(v26 + 20);
                  if ( v28 > 0 )
                  {
                    v26 = v35;
                    v27 = (double)*(int *)(v35 + v25) / (double)v28;
                  }
                  v30 = (int)(v27 * v23);
                  sub_2EDC10((int **)&v31, (int *)v24, &v30, v26, v20, v21);
                  if ( !v31 || *(int *)v31 > 1 )
                    sub_187120((__int64)&v31, 0, 0, 0, v20, v21);
                  ++v24;
                  v25 += 4;
                }
                while ( v22 != v24 );
              }
              if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
                free(ptr);
            }
          }
        }
      }
    }
  }
  sub_4CE330(a1, a2);
  v3 = v33;
  v4 = *((__int64 (__fastcall **)(__int64))*a1 + 58);
  if ( v4 == sub_4C46B0 )
    v5 = QT::QSplitter::count(a1[13]);
  else
    v5 = v4((__int64)a1);
  if ( v5 == v3 )
    QT::QSplitter::setSizes(a1[13], &v31);
  if ( v31 && !_InterlockedSub((volatile signed __int32 *)v31, 1u) )
    free(v31);
  return v37 - __readfsqword(0x28u);
}
