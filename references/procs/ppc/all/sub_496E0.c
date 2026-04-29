unsigned __int64 __fastcall sub_496E0(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // edx
  char *v3; // rsi
  __int16 *v4; // rax
  __int16 v6; // [rsp+0h] [rbp-28h] BYREF
  char v7; // [rsp+2h] [rbp-26h] BYREF
  unsigned __int64 v8; // [rsp+18h] [rbp-10h]

  v1 = 10;
  v2 = *(_DWORD *)(a1 + 252);
  v8 = __readfsqword(0x28u);
  if ( (v2 & 0x2000) != 0 )
  {
    v3 = "e_";
    if ( *(_WORD *)(a1 + 250) == 2 )
      v3 = "se_";
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v3, 5);
    v1 = 8;
    if ( *(_WORD *)(a1 + 250) == 2 )
      v1 = 7;
    v2 = *(_DWORD *)(a1 + 252);
  }
  if ( (v2 & 0x100) != 0 )
  {
    v4 = (__int16 *)&v7;
    v6 = 29292;
  }
  else
  {
    v4 = &v6;
  }
  if ( (v2 & 0x200) != 0 )
  {
    *((_BYTE *)v4 + 2) = 114;
    v4 = (__int16 *)((char *)v4 + 3);
    *(__int16 *)((char *)v4 - 3) = 29795;
  }
  if ( (v2 & 8) != 0 )
  {
    *(_BYTE *)v4 = 108;
    v4 = (__int16 *)((char *)v4 + 1);
  }
  if ( (v2 & 4) != 0 )
  {
    *(_BYTE *)v4 = 97;
    v4 = (__int16 *)((char *)v4 + 1);
  }
  if ( (v2 & 1) != 0 )
  {
    *(_BYTE *)v4 = 111;
    v4 = (__int16 *)((char *)v4 + 1);
  }
  if ( (v2 & 0x4000) != 0 )
  {
    *((_BYTE *)v4 + 2) = 56;
    v4 = (__int16 *)((char *)v4 + 3);
    *(__int16 *)((char *)v4 - 3) = 12849;
  }
  if ( (v2 & 2) != 0 )
  {
    *(_BYTE *)v4 = 46;
    v4 = (__int16 *)((char *)v4 + 1);
  }
  if ( (v2 & 0x800) != 0 )
  {
    *(_BYTE *)v4 = 43;
    v4 = (__int16 *)((char *)v4 + 1);
  }
  if ( (v2 & 0x1000) != 0 )
  {
    *(_BYTE *)v4 = 45;
    v4 = (__int16 *)((char *)v4 + 1);
  }
  if ( (v2 & 0x10000) != 0 )
  {
    *(_BYTE *)v4 = 120;
    v4 = (__int16 *)((char *)v4 + 1);
  }
  *(_BYTE *)v4 = 0;
  (*(void (__fastcall **)(__int64, __int64, __int16 *))(*(_QWORD *)a1 + 280LL))(a1, v1, &v6);
  return v8 - __readfsqword(0x28u);
}
