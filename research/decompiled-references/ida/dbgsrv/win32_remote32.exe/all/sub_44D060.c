/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D060
// Address: 0x0044D060

//----- (0044D060) --------------------------------------------------------
int __usercall sub_44D060@<eax>(__m128i a1@<xmm0>, int a2, int *a3)
{
  int *v3; // edi
  char v4; // bl
  bool v5; // zf
  const char *v6; // eax
  const char *v7; // eax
  int result; // eax
  int *v9; // ebx
  int v10; // esi
  int v11; // ebx
  void *v12; // eax
  _BYTE v13[24]; // [esp+0h] [ebp-28h] BYREF
  _BYTE *v14; // [esp+18h] [ebp-10h]
  int v15; // [esp+24h] [ebp-4h]

  v14 = v13;
  v3 = a3;
  v4 = 1;
  v13[23] = 1;
  v15 = 0;
  v5 = (unsigned __int8)sub_44D530(a3[18], 10000) == 0;
  v6 = MultiByteStr;
  if ( v5 )
  {
    if ( v3[20] )
      v6 = (const char *)v3[19];
    sub_442A00(a1, (int)v3, "Handshake with %s failed (timeout period %d ms)\n", v6, 10000);
  }
  else
  {
    if ( v3[20] )
      v6 = (const char *)v3[19];
    sub_442A00(a1, (int)v3, "Accepting connection from %s...\n", v6);
    v4 = (*(int (__thiscall **)(int *))(*v3 + 4))(v3);
  }
  v5 = v3[20] == 0;
  v7 = MultiByteStr;
  v15 = -1;
  if ( !v5 )
    v7 = (const char *)v3[19];
  result = sub_442A00(a1, (int)v3, "Closing connection from %s...\n", v7);
  if ( v4 )
  {
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 48) + 4))(*(_DWORD *)(a2 + 48));
    v9 = *(int **)(*(_DWORD *)(a2 + 48) + 4);
    v10 = *v9;
    a3 = (int *)v10;
    if ( (int *)v10 == v9 )
    {
LABEL_14:
      v11 = a2;
    }
    else
    {
      while ( *(int **)(v10 + 16) != v3 )
      {
        sub_40B5E0((int *)&a3);
        v10 = (int)a3;
        if ( a3 == v9 )
          goto LABEL_14;
      }
      if ( *(_DWORD *)(v10 + 20) )
        sub_4564E0(*(HANDLE **)(v10 + 20));
      v11 = a2;
      v12 = (void *)sub_40BA90((int ***)(*(_DWORD *)(a2 + 48) + 4), v10);
      sub_4627F2(v12);
      v15 = -1;
    }
    (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v11 + 48) + 8))(*(_DWORD *)(v11 + 48));
    return (*(int (__thiscall **)(int *, int))*v3)(v3, 1);
  }
  return result;
}
