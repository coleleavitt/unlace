__int64 __fastcall sub_20905E0(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  switch ( *(_BYTE *)a1 )
  {
    case 0x1D:
    case 0x1E:
    case 0x23:
    case 0x24:
    case 0x28:
      if ( a2 )
        goto LABEL_13;
      a1 -= 32LL * *(unsigned int *)(a1 + 88);
      goto LABEL_9;
    case 0x1F:
      result = *(_QWORD *)(a1 - 32LL * a2 - 32);
      break;
    case 0x20:
      result = *(_QWORD *)(*(_QWORD *)(a1 - 8) + 32LL * (2 * a2 + 1));
      break;
    case 0x21:
    case 0x27:
      result = *(_QWORD *)(*(_QWORD *)(a1 - 8) + 32LL * (a2 + 1));
      break;
    case 0x22:
      if ( a2 )
LABEL_9:
        result = *(_QWORD *)(a1 - 64);
      else
        result = *(_QWORD *)(a1 - 96);
      break;
    case 0x25:
      if ( (*(_BYTE *)(a1 + 2) & 1) != 0 )
        result = *(_QWORD *)(a1 + 32 * (1LL - (*(_DWORD *)(a1 + 4) & 0x7FFFFFF)));
      else
LABEL_13:
        result = nullsub_1556();
      break;
    case 0x26:
      result = *(_QWORD *)(a1 - 32);
      break;
  }
  return result;
}
