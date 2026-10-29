__int64 __fastcall sub_79BBF0(_QWORD *a1, __int64 a2, const char *a3, size_t a4, unsigned __int8 a5)
{
  __int64 v5; // r9
  __int64 result; // rax

  v5 = *(_QWORD *)(a2 + 1544);
  *(_DWORD *)a1 = -1;
  result = (__int64)a1;
  if ( *(_QWORD *)v5 )
    return sub_790A40(*(_BYTE **)v5, (__int8 *)a2, a1, a3, a4, a5, *(void (__fastcall **)(__int8 *, _QWORD))(v5 + 2120));
  return result;
}

