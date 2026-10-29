/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_465850
// Address: 0x0000000000465850

//----- (0000000000465850) ----------------------------------------------------
__int64 __fastcall sub_465850(__int64 a1, unsigned int a2)
{
  __int64 v4; // x22
  _QWORD *v5; // x0
  __int64 v6; // x19
  _QWORD *v7; // x21
  __int64 v8; // x20
  unsigned int v9; // w23
  __int64 (__fastcall *v10)(_QWORD *); // x2
  char *v11; // x0
  __int64 v12; // x27
  __int64 v13; // x26
  __int64 i; // x25
  char *v15; // x22
  void *v16; // x0
  void *v17; // x0
  __int64 v18; // x0
  int v19; // w0
  int *v20; // x0
  __int64 v21; // x19
  int *v22; // x0

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                  + 88LL));
  v4 = *(_QWORD *)(a1 + 448);
  v5 = *(_QWORD **)(v4 + 88);
  v6 = v5[4];
  if ( (_QWORD *)v6 == v5 + 2 )
  {
    v9 = 0;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v7 = *(_QWORD **)(v6 + 32);
    if ( (_QWORD *)a1 == v7 )
      goto LABEL_3;
    v8 = v7[55];
    v9 = *(unsigned __int8 *)(v8 + 860);
    if ( !*(_BYTE *)(v8 + 860) || *(_DWORD *)(v8 + 656) != a2 )
      goto LABEL_3;
    v10 = *(__int64 (__fastcall **)(_QWORD *))(*(_QWORD *)v8 + 512LL);
    if ( v10 == sub_4071F0 )
      break;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))v10)(v7[55], a2) )
      goto LABEL_17;
    v4 = *(_QWORD *)(a1 + 448);
LABEL_3:
    v6 = sub_49F6E8(v6);
    v5 = *(_QWORD **)(v4 + 88);
    if ( (_QWORD *)v6 == v5 + 2 )
    {
      v9 = 0;
      goto LABEL_25;
    }
  }
  v11 = *(char **)(v8 + 456);
  if ( v11 )
  {
    v12 = *(_QWORD *)(v8 + 464);
    if ( v12 )
    {
      v13 = 0;
      for ( i = 0; i != v12; ++i )
      {
        v15 = &v11[v13];
        v16 = *(void **)&v11[v13 + 40];
        if ( v16 )
        {
          *((_QWORD *)v15 + 6) = 0;
          j__free(v16);
        }
        v17 = *((void **)v15 + 2);
        if ( v17 )
        {
          *((_QWORD *)v15 + 3) = 0;
          j__free(v17);
        }
        v13 += 80;
        v11 = *(char **)(v8 + 456);
      }
    }
    *(_QWORD *)(v8 + 464) = 0;
    j__free(v11);
    *(_QWORD *)(v8 + 456) = 0;
    *(_QWORD *)(v8 + 472) = 0;
  }
LABEL_17:
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 440) + 112LL))(*(_QWORD *)(a1 + 440));
  v18 = *(_QWORD *)(a1 + 440);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
  v19 = *(unsigned __int8 *)(a1 + 184);
  *(_QWORD *)(a1 + 440) = v8;
  if ( v19 )
    sub_40A690((int)"reusing previously broken debugging session\n");
  sub_4759C8((__int64)v7);
  v20 = (int *)v6;
  v21 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 88LL);
  v22 = sub_49FAC0(v20, (_QWORD *)(v21 + 16));
  j__free_0(v22);
  --*(_QWORD *)(v21 + 48);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  *(_BYTE *)(v8 + 860) = 0;
  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
LABEL_25:
  (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
  return v9;
}
