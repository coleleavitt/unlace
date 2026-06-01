unsigned __int64 __fastcall sub_463110(__int64 a1, int a2, __int64 *a3)
{
  void *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 result; // rax
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+8h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-18h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  switch ( a2 )
  {
    case 0:
      QT::QString::fromUtf8(&ptr, 15, "Debug registers");
      v4 = ptr;
      v5 = *a3;
      if ( *a3 )
      {
        v4 = *(void **)v5;
        *(_QWORD *)v5 = ptr;
        v6 = *(_QWORD *)(v5 + 8);
        ptr = v4;
        *(_QWORD *)(v5 + 8) = v10;
        v10 = v6;
        v7 = *(_QWORD *)(v5 + 16);
        *(_QWORD *)(v5 + 16) = v11;
        v11 = v7;
      }
      if ( v4 )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v4, 1u) )
          free(ptr);
      }
      goto LABEL_7;
    case 1:
      result = sub_1E3120(a1, *(_QWORD *)a3[1]);
      break;
    case 2:
      result = sub_1E1BF0(a1, a3[1]);
      break;
    case 3:
      result = sub_1E2F40(a1, a3[1]);
      break;
    case 4:
      result = sub_1E2640(a1, a3[1], *(_DWORD *)a3[2], *(_DWORD *)a3[3]);
      break;
    case 5:
      result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 1096LL))(a1, *(_QWORD *)a3[1]);
      break;
    default:
LABEL_7:
      result = v12 - __readfsqword(0x28u);
      break;
  }
  return result;
}
