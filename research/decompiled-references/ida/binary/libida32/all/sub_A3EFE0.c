__int64 __fastcall sub_A3EFE0(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  switch ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 18LL) >> 3)
          + 32)
         & 0x1FF )
  {
    case 0:
    case 4:
      result = *(_QWORD *)(a1[2181] + 80LL);
      break;
    case 1:
      result = *(_QWORD *)(a1[2181] + 96LL);
      break;
    case 2:
      result = *(_QWORD *)(a1[2181] + 104LL);
      break;
    case 3:
      v3 = a1[290];
      if ( *(_DWORD *)(v3 + 64) && (*(_BYTE *)(v3 + 68) & 8) != 0 )
        result = *(_QWORD *)(a1[2182] + 112LL);
      else
        result = *(_QWORD *)(a1[2181] + 112LL);
      break;
    case 5:
      result = *(_QWORD *)(a1[2181] + 88LL);
      break;
    case 6:
      v4 = a1[290];
      if ( *(_DWORD *)(v4 + 64) && (*(_BYTE *)(v4 + 68) & 8) != 0 )
        result = *(_QWORD *)(a1[2182] + 120LL);
      else
        result = *(_QWORD *)(a1[2181] + 120LL);
      break;
    case 7:
      result = *(_QWORD *)(a1[2181] + 128LL);
      break;
  }
  return result;
}

