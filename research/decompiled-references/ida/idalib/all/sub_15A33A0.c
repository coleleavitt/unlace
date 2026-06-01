__int64 __fastcall sub_15A33A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rdx

  switch ( *(_DWORD *)a1 )
  {
    case 0:
      v5 = *(_QWORD *)(a1 + 8);
      goto LABEL_6;
    case 1:
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
LABEL_6:
      result = *(_QWORD *)(*(_QWORD *)(v5 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(result + 16) - 25 <= 1 )
        return result;
      v6 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25;
      if ( (unsigned int)v6 > 1 )
        return 0;
      else
        return sub_F63050(result, a2, v6, a4);
    case 2:
    case 3:
      return *(_QWORD *)(a1 + 8);
    case 4:
    case 5:
      return 0;
  }
}
