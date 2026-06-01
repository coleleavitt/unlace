__int64 __fastcall sub_47C280(__int64 a1, unsigned int *a2)
{
  int *v3; // rdi
  unsigned int v4; // ebp
  __int64 (__fastcall *v5)(__int64, unsigned int); // rax
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // rax

  v3 = *(int **)(a1 + 8);
  v4 = *a2;
  v5 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v3 + 168LL);
  if ( v5 == sub_46AD80 )
  {
    v6 = switch_dbctx(v3[2]);
    sub_4EE820(*(_QWORD *)(v6 + 1480) + 2672LL, v4);
  }
  else
  {
    v5((__int64)v3, v4);
  }
  v7 = *(__int64 **)a1;
  v8 = v7[1];
  v9 = *v7;
  if ( v7[2] < (unsigned __int64)(v8 + 1) )
  {
    v12 = qvector_reserve(v7, v9, v8 + 1, 24);
    v8 = v7[1];
    *v7 = v12;
    v9 = v12;
  }
  v10 = v9 + 24 * v8;
  *(_QWORD *)v10 = 0;
  *(_OWORD *)(v10 + 8) = 0;
  ++v7[1];
  sub_357520((__int64 *)v10);
  return 0;
}

