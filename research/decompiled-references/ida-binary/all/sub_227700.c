__int64 __fastcall sub_227700(int a1, __int64 a2)
{
  __int64 v3; // rdx
  __int16 v4; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  if ( a1 == -1 || a1 == 100 )
  {
    v4 = 0;
    if ( !dbg || (*(_BYTE *)(dbg + 37) & 2) != 0 && *(_QWORD *)(dbg + 72) && *(_BYTE *)(dbg + 80) )
    {
      v3 = 1;
    }
    else
    {
      (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a2 + 8LL))(a2, 143, &v4);
      v3 = 0;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, 143, v3);
    (**(void (__fastcall ***)(__int64, __int64, __int16 *))a2)(a2, 100, &v4);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)a2 + 16LL))(a2, 1, v4 != 0);
  }
  return 1;
}
