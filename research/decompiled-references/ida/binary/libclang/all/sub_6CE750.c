__int64 __fastcall sub_6CE750(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  bool v5; // dl
  __int64 v6; // rbx

  switch ( (*(unsigned int (__fastcall **)(_QWORD, __int64, bool))(**(_QWORD **)(a1 + 17288) + 16LL))(
             *(_QWORD *)(a1 + 17288),
             a2,
             a3 != 0) )
  {
    case 0u:
      v5 = 1;
      result = 0;
      break;
    case 1u:
      result = *(_QWORD *)(a1 + 18544);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 2u:
      result = *(_QWORD *)(a1 + 18592);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 3u:
      result = *(_QWORD *)(a1 + 18552);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 4u:
      result = *(_QWORD *)(a1 + 18600);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 5u:
      result = *(_QWORD *)(a1 + 18560);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 6u:
      result = *(_QWORD *)(a1 + 18608);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 7u:
      result = *(_QWORD *)(a1 + 18568);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 8u:
      result = *(_QWORD *)(a1 + 18616);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 9u:
      result = *(_QWORD *)(a1 + 18576);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
    case 0xAu:
      result = *(_QWORD *)(a1 + 18624);
      v5 = (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF;
      break;
  }
  if ( (_DWORD)a2 == 128 && v5 )
  {
    v6 = a1 + 18632;
    if ( a3 )
      v6 = a1 + 18584;
    return *(_QWORD *)v6;
  }
  return result;
}

