__int64 __fastcall sub_410150(_DWORD *a1, int a2)
{
  int v2; // r15d
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  int v6; // r15d
  int v7; // ebp
  int v8; // r13d
  int v9; // r13d
  int v10; // eax
  int v11; // ecx
  __int64 result; // rax
  __int64 v13; // rdx
  int v14; // [rsp+0h] [rbp-38h]

  if ( a1[9] == 1 )
    v2 = 1 - a1[11];
  else
    v2 = a1[11];
  v3 = a1[13] - 1;
  v4 = v3 / 12;
  v5 = v3 % 12;
  if ( v3 % 12 < 0 )
  {
    v5 += 12;
    --v4;
  }
  v6 = v4 + v2;
  a1[10] = 1;
  v14 = v5 + 1;
  v7 = v6 - 1;
  if ( v6 <= 0 )
  {
    a1[9] = 1;
    a1[11] = 1 - v6;
  }
  else
  {
    a1[9] = 0;
    a1[11] = v6;
  }
  v8 = v6 - 1;
  if ( v7 <= -1 )
    v8 = v7 + 3;
  v9 = ((unsigned int)(v7 - 4 * (v8 >> 2)) < 0x80000000) + (v8 >> 2) - 1;
  v10 = sub_4100F0(a1);
  v11 = a1[14];
  result = v9
         + 365 * v7
         + v11
         + dword_50699C[13 * v10 + v14]
         - (((unsigned int)(v7 % 100) < 0x80000000)
          + v7 / 100)
         + (unsigned int)((unsigned int)(v7 % 400) < 0x80000000)
         + v7 / 400
         + 1721425;
  if ( (int)result < a2 )
  {
    a1[10] = 0;
    v13 = 4LL * v14 + 48;
    if ( (v6 & 3) != 0 )
      v13 = 4LL * v14 - 4;
    result = (unsigned int)(*(_DWORD *)((char *)qword_5069A0 + v13) + v11 + 365 * v7 + v9 + 1721423);
  }
  a1[8] = result;
  return result;
}

