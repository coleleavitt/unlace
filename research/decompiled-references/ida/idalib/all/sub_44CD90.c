__int64 __fastcall sub_44CD90(__int64 *a1, int *a2)
{
  int v2; // edx
  int v4; // eax
  bool v5; // zf
  int v6; // eax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  int v10; // edx
  int v11; // r14d
  int v12; // r13d
  int v13; // r12d
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rsi
  int v18; // [rsp+0h] [rbp-58h]
  int v19; // [rsp+4h] [rbp-54h]
  _QWORD v20[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *a2;
  v20[1] = __readfsqword(0x28u);
  v18 = 2;
  v4 = v2 & 0x802;
  if ( (v2 & 0x802) != 0 )
  {
    if ( v4 == 2 )
    {
      v18 = 4;
    }
    else
    {
      v5 = v4 == 2048;
      v6 = 8;
      if ( v5 )
        v6 = 1;
      v18 = v6;
    }
  }
  v7 = *((_QWORD *)a2 + 2);
  v8 = *((_QWORD *)a2 + 1);
  v19 = 0x7FFFFFFF;
  if ( v8 < v7 )
  {
    v9 = v7 - v8;
    v10 = v2 & 0x404;
    if ( v10 )
    {
      if ( v10 == 4 )
      {
        v9 >>= 2;
      }
      else if ( v10 != 1024 )
      {
        v9 >>= 3;
      }
    }
    else
    {
      v9 >>= 1;
    }
    v19 = v9;
  }
  if ( !*((_WORD *)a2 + 2) )
    return 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = a1[3];
    v20[0] = 0;
    v15 = *(_QWORD *)(v14 + 16) & (v7 + v11);
    v16 = v15;
    if ( (sub_3BE900(a1, v15, 4) & 0x600) == 0x200 )
      v16 = sub_3C2650(a1, v15);
    if ( (~((unsigned __int16)sub_3BE900(a1, v16, 4) >> 8) & 6) == 0
      || v18 != sub_3BFD20(a1, v20, v18, v15, 0, 0)
      || v20[0] >= (unsigned __int64)v19 )
    {
      break;
    }
    if ( (unsigned __int64)v13 < v20[0] )
      v13 = v20[0];
    ++v12;
    v11 += v18;
    if ( *((unsigned __int16 *)a2 + 2) <= v12 )
      break;
    v7 = *((_QWORD *)a2 + 2);
  }
  if ( !v13 || !v12 )
    return 0;
  *((_WORD *)a2 + 2) = v12;
  a2[10] = v13 + 1;
  return 1;
}
