unsigned __int64 __fastcall sub_7BAC20(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int16 *v11; // rax
  char *v12; // rsi
  int v13; // ecx
  __int64 v14; // rax
  char *v15; // [rsp+0h] [rbp-48h]
  int v16; // [rsp+Ch] [rbp-3Ch]

  v2 = a2;
  if ( *(_QWORD *)(qword_2CCB598 + 1504) >= a2 )
  {
    v5 = *(unsigned __int8 *)(*a1 + 5881);
    v6 = *(_QWORD *)(*a1 + 5904);
    *(_WORD *)((char *)a1 + 53) = 9;
    v7 = v5;
    v8 = v5 + 1;
    v9 = swap64(a2 + 1);
    v10 = *a1;
    a1[7] = v9;
    sub_7443D0(v10, (unsigned __int16 *)((char *)a1 + 53));
    do
    {
      v11 = (unsigned __int16 *)sub_741450(*a1);
      if ( !v11 )
        break;
      v12 = (char *)v11 - 1;
      if ( v11 == (unsigned __int16 *)((char *)&dword_0 + 1) )
        break;
      v13 = *v11;
      if ( v13 < v8 )
        break;
      if ( (*(_BYTE *)(*a1 + 6016) & 2) != 0 )
      {
        v2 = _byteswap_ulong(*(_DWORD *)((char *)v11 + 3));
      }
      else
      {
        v16 = *v11;
        v15 = (char *)v11 - 1;
        v14 = swap64(*(_QWORD *)((char *)v11 + 3));
        v13 = v16;
        v12 = v15;
        v2 = v14;
      }
      if ( v6 >= v2 )
        return v6;
    }
    while ( v13 == 2 * v8 && v12[v7 + 4] == 68 );
  }
  return v2;
}
