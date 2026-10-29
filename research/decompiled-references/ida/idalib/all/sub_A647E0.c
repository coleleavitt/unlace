__int64 __fastcall sub_A647E0(_QWORD *a1)
{
  __int64 result; // rax
  char v3; // bp
  __int64 v4; // rdi
  __int64 v5; // [rsp+0h] [rbp-20h]

  result = a1[2910];
  if ( !result )
  {
    if ( *(_DWORD *)(a1[2181] + 340LL) == 10 )
    {
      result = operator new(0x90u);
      v4 = a1[2910];
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_DWORD *)(result + 24) = 0;
      *(_BYTE *)(result + 32) = 1;
      *(_QWORD *)result = &off_2B4C370;
      *(_QWORD *)(result + 40) = a1;
      *(_QWORD *)(result + 48) = 0;
      *(_QWORD *)(result + 56) = 0;
      *(_DWORD *)(result + 64) = 0;
      *(_QWORD *)(result + 72) = 0;
      *(_QWORD *)(result + 80) = 0;
      *(_DWORD *)(result + 88) = 0;
      *(_QWORD *)(result + 96) = 0;
      *(_QWORD *)(result + 104) = 0;
      *(_DWORD *)(result + 112) = 0;
      *(_QWORD *)(result + 120) = 0;
      *(_QWORD *)(result + 128) = 0;
      *(_DWORD *)(result + 136) = 0;
      a1[2910] = result;
      if ( !v4 )
        return result;
    }
    else
    {
      v3 = *(_BYTE *)(a1[290] + 172LL);
      v5 = operator new(0x90u);
      sub_F7D790(v5, a1, (v3 & 0x10) != 0);
      v4 = a1[2910];
      result = v5;
      a1[2910] = v5;
      if ( !v4 )
        return result;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    return a1[2910];
  }
  return result;
}
