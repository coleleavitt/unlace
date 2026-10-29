__int64 __fastcall sub_655D80(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r12
  _DWORD *v4; // rdx

  result = *(_QWORD *)(sub_15D1F10(a2) + 24);
  if ( result && *(_DWORD *)result == 5
    || *(_WORD *)(a2 + 4) == 1 && (result = sub_15D2CB0(*(_QWORD *)a1, a2), (_BYTE)result)
    || (v3 = sub_15D1F10(a2), result = sub_15F0200(a1 + 24), (v4 = *(_DWORD **)(v3 + 24)) != nullptr)
    && (_DWORD)result == *v4
    && !v4[1]
    || (sub_15D1F10(a2), result = *(_QWORD *)(sub_15D1F10(a2) + 24), *(_DWORD *)(result + 24))
    || (result = *(_QWORD *)(sub_15D1F10(a2) + 24)) != 0
    && *(_DWORD *)(a1 + 72) == *(_DWORD *)result
    && (result = *(unsigned int *)(result + 4), !(_DWORD)result) )
  {
    *(_DWORD *)(a1 + 88) = 1;
  }
  return result;
}

