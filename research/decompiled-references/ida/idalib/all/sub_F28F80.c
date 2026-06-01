__int64 __fastcall sub_F28F80(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  _DWORD *v3; // rbx
  __int64 result; // rax
  _DWORD *i; // r12
  __int64 v6; // kr00_8
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax

  v3 = *(_DWORD **)(a2 + 48);
  result = *(unsigned int *)(a2 + 40);
  for ( i = &v3[result]; v3 != i; ++v3 )
  {
    v6 = v2;
    v2 = *(_QWORD *)(a1 + 1096);
    switch ( *v3 )
    {
      case 0:
        v8 = j__strlen(" supervisor");
        result = sub_9954E0(v2, " supervisor", v8);
        break;
      case 1:
        v11 = j__strlen(" machine");
        result = sub_9954E0(v2, " machine", v11);
        break;
      case 2:
        v10 = j__strlen(" qcinest");
        result = sub_9954E0(v2, " qcinest", v10);
        break;
      case 3:
        v12 = j__strlen(" qcinonest");
        result = sub_9954E0(v2, " qcinonest", v12);
        break;
      case 4:
        v7 = j__strlen(" SiFiveCLICPreemptible");
        result = sub_9954E0(v2, " SiFiveCLICPreemptible", v7);
        break;
      case 5:
        v9 = j__strlen(" SiFiveCLICStackSwap");
        result = sub_9954E0(v2, " SiFiveCLICStackSwap", v9);
        break;
      default:
        v2 = v6;
        break;
    }
  }
  return result;
}
