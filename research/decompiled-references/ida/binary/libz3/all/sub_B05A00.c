__int64 __fastcall sub_B05A00(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 v4; // rdi
  int v5; // eax
  __int64 result; // rax
  __int64 v7; // rdx

  v2 = 0;
  sub_182F200(*(_QWORD *)(a2 + 184), a2 + 192);
  sub_182F200(*(_QWORD *)(a2 + 160), a2 + 168);
  v4 = *(_QWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 152) = 0;
  sub_182F200(v4, a2 + 136);
  sub_182F200(*(_QWORD *)(a2 + 96), a2 + 104);
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 120) = 0;
  for ( result = *(_QWORD *)(a2 + 40LL * (v5 & 1) + 16);
        result;
        result = *(_QWORD *)(a2 + 40LL * (*(_DWORD *)(a2 + 8) & 1) + 16) )
  {
    if ( v2 >= *(_DWORD *)(result - 4) )
      break;
    v7 = 5LL * v2++;
    sub_1839610(*(_QWORD *)(a2 + 160), a2 + 168, result + 8 * v7 + 8);
  }
  return result;
}

