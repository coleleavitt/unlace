_QWORD *__fastcall sub_4D01F0(_QWORD *a1, unsigned __int16 *a2, const QT::QString *a3)
{
  int v4; // esi
  __int64 v6; // rax
  void *v7; // rdx
  void *v8; // rdx
  void *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rdx
  void *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  volatile signed __int32 *v19; // rax
  void *ptr[4]; // [rsp+0h] [rbp-B8h] BYREF
  void *v22[4]; // [rsp+20h] [rbp-98h] BYREF
  void *v23[4]; // [rsp+40h] [rbp-78h] BYREF
  void *v24[11]; // [rsp+60h] [rbp-58h] BYREF

  v4 = *((_DWORD *)a2 + 2);
  v24[3] = (void *)__readfsqword(0x28u);
  QT::QString::number((QT::QString *)ptr, v4, 10);
  QT::QString::QString(v22, *a2);
  QT::QString::append((QT::QString *)v22, (const QT::QString *)ptr);
  v6 = QT::QString::append(v22, a2[1]);
  v7 = *(void **)v6;
  *(_QWORD *)v6 = 0;
  v23[0] = v7;
  v8 = *(void **)(v6 + 8);
  *(_QWORD *)(v6 + 8) = 0;
  v23[1] = v8;
  v9 = *(void **)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0;
  v10 = a2[2];
  v23[2] = v9;
  v11 = QT::QString::append(v23, v10);
  v12 = *(void **)v11;
  *(_QWORD *)v11 = 0;
  v24[0] = v12;
  v13 = *(void **)(v11 + 8);
  *(_QWORD *)(v11 + 8) = 0;
  v24[1] = v13;
  v14 = *(void **)(v11 + 16);
  *(_QWORD *)(v11 + 16) = 0;
  v24[2] = v14;
  v15 = (__int64 *)QT::QString::append((QT::QString *)v24, a3);
  v16 = *v15;
  *v15 = 0;
  *a1 = v16;
  v17 = v15[1];
  v15[1] = 0;
  a1[1] = v17;
  v18 = v15[2];
  v15[2] = 0;
  v19 = (volatile signed __int32 *)v24[0];
  a1[2] = v18;
  if ( v19 && !_InterlockedSub(v19, 1u) )
    free(v24[0]);
  if ( v23[0] && !_InterlockedSub((volatile signed __int32 *)v23[0], 1u) )
    free(v23[0]);
  if ( v22[0] && !_InterlockedSub((volatile signed __int32 *)v22[0], 1u) )
    free(v22[0]);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return a1;
}
