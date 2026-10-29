void __fastcall sub_959B00(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned int v6; // r11d
  int *v7; // rcx
  unsigned __int64 v8; // r10
  int v9; // eax
  unsigned int v10; // r10d
  int v11; // ecx
  int v12; // esi
  unsigned int v13; // esi

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 && (v4 = *(_QWORD *)(a1 + 8), v3 > v4) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v6 = a2 + a3;
    v7 = (int *)(*(_QWORD *)a1 + 12 * v4);
    v8 = (unsigned int)v7[1];
    v9 = v7[2];
    if ( v5 >= v8 || (v10 = v8 - v5) == 0 )
    {
      v10 = 0;
      v9 = v7[1] + v9 - v5;
    }
    if ( a3 <= v10 )
    {
      *(_QWORD *)(a1 + 40) = -1;
      sub_959A80(a1, a3);
    }
    else
    {
      v11 = *v7;
      v12 = v10 + a2;
      *(_DWORD *)(a1 + 40) = v12;
      v13 = v9 + v12;
      *(_DWORD *)(a1 + 44) = v13;
      *(_DWORD *)(a1 + 48) = v11;
      if ( v13 <= v6 )
      {
        sub_959A80(a1, v9 + v10);
      }
      else
      {
        *(_DWORD *)(a1 + 44) = v6;
        sub_959A80(a1, a3);
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 40) = -1;
  }
}
