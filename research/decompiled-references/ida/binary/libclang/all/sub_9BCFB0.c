__int64 __fastcall sub_9BCFB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax

  if ( (*(_BYTE *)(a2 + 1) & 6) != 0 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 25 <= 1 )
    {
LABEL_3:
      v2 = *(_QWORD *)(a1 + 184);
      sub_A1A5A0(v2, 24);
      return sub_A1A5E0(v2, 24);
    }
LABEL_6:
    v4 = *(_QWORD *)(a1 + 184);
    v5 = sub_A1A5A0(v4, 56);
    sub_A1C0C0(v5);
    return sub_A1A5E0(v4, 56);
  }
  result = sub_8CA760(*(__int64 **)(a1 + 192), *(_QWORD *)(a2 + 8));
  if ( !BYTE4(result) )
    goto LABEL_6;
  switch ( (int)result )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 10:
      v6 = *(_QWORD *)(a1 + 184);
      sub_A1A5A0(v6, 8);
      result = sub_A1A5E0(v6, 8);
      break;
    case 8:
    case 9:
      v7 = *(_QWORD *)(a1 + 184);
      v8 = sub_A1A5A0(v7, 16);
      if ( *(_DWORD *)(v8 + 8) > 0x40u )
      {
        if ( *(_QWORD *)v8 )
          operator delete[](*(void **)v8);
      }
      result = sub_A1A5E0(v7, 16);
      break;
    case 11:
      v2 = *(_QWORD *)(a1 + 184);
      v10 = sub_A1A5A0(v2, 24);
      if ( *(_DWORD *)(v10 + 8) > 0x40u && *(_QWORD *)v10 )
        operator delete[](*(void **)v10);
      return sub_A1A5E0(v2, 24);
    case 12:
      v2 = *(_QWORD *)(a1 + 184);
      v9 = (__int64 *)sub_A1A5A0(v2, 24);
      sub_5FF3B0(v9);
      return sub_A1A5E0(v2, 24);
    case 13:
      goto LABEL_6;
    case 14:
      goto LABEL_3;
    case 15:
      v11 = *(_QWORD *)(a1 + 184);
      v12 = sub_A1A5A0(v11, 72);
      sub_A1C0C0(v12);
      result = sub_A1A5E0(v11, 72);
      break;
    default:
      return result;
  }
  return result;
}

