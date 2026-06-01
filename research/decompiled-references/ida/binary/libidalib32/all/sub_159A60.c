__int64 __fastcall sub_159A60(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  char v4; // al
  void (__fastcall *v6)(__int64, __int64, __int64, int *, _QWORD); // rax
  int v7; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 480) )
  {
    v2 = a1 + 440;
    if ( *(_BYTE *)(a1 + 984) )
    {
      if ( *(_DWORD *)(a1 + 472) == 1 )
      {
        v3 = *(_QWORD *)(a1 + 848);
        if ( v3 )
        {
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 280LL))(v3);
          *(_BYTE *)(a1 + 840) = 0;
          *(_BYTE *)(a1 + 953) = 1;
          if ( !v4 && !*(_BYTE *)(a1 + 985) )
          {
            v6 = *(void (__fastcall **)(__int64, __int64, __int64, int *, _QWORD))(a1 + 408);
            v7 = 1796;
            if ( v6 )
            {
              *(_BYTE *)(a1 + 985) = 1;
              v6(a1, v2, v2, &v7, *(_QWORD *)(a1 + 432));
              *(_BYTE *)(a1 + 985) = 0;
            }
          }
        }
      }
    }
    return sub_152F30(a1);
  }
  else
  {
    sub_1582F0(a1);
    return sub_159B50();
  }
}

