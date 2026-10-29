__int64 __fastcall sub_51AB70(__int64 a1, const QT::QString *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  char *v4; // rbp
  char v5; // r12
  char v6; // al
  __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // r12
  char v18; // r14
  __int64 v19; // rsi
  unsigned __int64 v20; // r13
  __int64 v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  unsigned __int64 v27; // r13
  __int64 v28; // rsi
  __int64 v29; // rax
  void *ptr; // [rsp+0h] [rbp-58h] BYREF
  char *v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v2 = v32;
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v3 = v2 + 2;
  if ( v3 )
  {
    v12 = qvector_reserve(a1, 0, v3, 1);
    v4 = v31;
    *(_QWORD *)a1 = v12;
    if ( v4 )
      goto LABEL_3;
  }
  else
  {
    v4 = v31;
    if ( v31 )
      goto LABEL_3;
  }
  v4 = (char *)&QT::QByteArray::_empty;
LABEL_3:
  while ( 1 )
  {
    v5 = *v4;
    if ( !*v4 )
      break;
    if ( v5 == 38 )
    {
      v6 = v4[1];
      if ( v6 == 38 )
      {
        v26 = *(_QWORD *)(a1 + 8);
        v27 = 2;
        if ( v26 )
          v27 = v26-- + 1;
        v28 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v27 )
        {
          v29 = qvector_reserve(a1, v28, v27, 1);
          *(_QWORD *)a1 = v29;
          v28 = v29;
        }
        *(_QWORD *)(a1 + 8) = v27;
        *(_BYTE *)(v28 + v26) = 38;
        *(_BYTE *)(*(_QWORD *)a1 + v26 + 1) = 0;
      }
      else
      {
        if ( !v6 )
          break;
        v13 = *(_QWORD *)(a1 + 8);
        v14 = 2;
        if ( v13 )
          v14 = v13-- + 1;
        v15 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v14 )
        {
          v24 = qvector_reserve(a1, v15, v14, 1);
          *(_QWORD *)a1 = v24;
          v15 = v24;
        }
        *(_QWORD *)(a1 + 8) = v14;
        v16 = 2;
        *(_BYTE *)(v15 + v13) = 126;
        *(_BYTE *)(*(_QWORD *)a1 + v13 + 1) = 0;
        v17 = *(_QWORD *)(a1 + 8);
        v18 = v4[1];
        if ( v17 )
          v16 = v17-- + 1;
        v19 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v16 )
        {
          v23 = qvector_reserve(a1, v19, v16, 1);
          *(_QWORD *)a1 = v23;
          v19 = v23;
        }
        *(_QWORD *)(a1 + 8) = v16;
        v20 = 2;
        *(_BYTE *)(v19 + v17) = v18;
        *(_BYTE *)(*(_QWORD *)a1 + v17 + 1) = 0;
        v21 = *(_QWORD *)(a1 + 8);
        if ( v21 )
          v20 = v21-- + 1;
        v22 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v20 )
        {
          v25 = qvector_reserve(a1, v22, v20, 1);
          *(_QWORD *)a1 = v25;
          v22 = v25;
        }
        *(_QWORD *)(a1 + 8) = v20;
        *(_BYTE *)(v22 + v21) = 126;
        *(_BYTE *)(*(_QWORD *)a1 + v21 + 1) = 0;
      }
      v4 += 2;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 8);
      ++v4;
      v9 = 2;
      if ( v8 )
        v9 = v8-- + 1;
      v10 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v9 )
      {
        v11 = qvector_reserve(a1, v10, v9, 1);
        *(_QWORD *)a1 = v11;
        v10 = v11;
      }
      *(_QWORD *)(a1 + 8) = v9;
      *(_BYTE *)(v10 + v8) = v5;
      *(_BYTE *)(*(_QWORD *)a1 + v8 + 1) = 0;
    }
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return a1;
}
