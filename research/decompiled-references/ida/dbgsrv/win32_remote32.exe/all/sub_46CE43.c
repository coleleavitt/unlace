/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46CE43
// Address: 0x0046CE43

//----- (0046CE43) --------------------------------------------------------
int __usercall sub_46CE43@<eax>(int a1@<ebx>, int a2@<edi>, int *a3, int a4)
{
  int result; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // kr00_8
  int v8; // eax
  unsigned __int64 v9; // kr08_8
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // kr18_8
  int v13; // eax
  __int64 v14; // rax
  unsigned __int64 v15; // kr28_8
  int v16; // eax
  __int64 v17; // rax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // edx
  __int64 v24; // [esp+4h] [ebp-14h] BYREF
  int v25; // [esp+Ch] [ebp-Ch] BYREF
  int v26; // [esp+10h] [ebp-8h] BYREF
  int v27; // [esp+14h] [ebp-4h] BYREF

  if ( !a3 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, a2);
    return 22;
  }
  memset(a3, 0xFFu, 0x24u);
  if ( !a4 )
  {
    *sub_46B984() = 22;
    sub_467EF4(a1, 0);
    return 22;
  }
  if ( *(int *)(a4 + 4) < 0 || *(__int64 *)a4 > 0x793582AFFLL )
  {
    *sub_46B984() = 22;
    return 22;
  }
  sub_47B33A(a4);
  v26 = 0;
  v25 = 0;
  v27 = 0;
  if ( sub_47A9F3(0, a4, &v26) || sub_47AA1F(0, a4, &v25) || sub_47AA4B(0, a4, &v27) )
  {
    sub_467F04(0, a4);
    __debugbreak();
  }
  v5 = *(_QWORD *)a4;
  if ( (unsigned __int64)(*(_QWORD *)a4 - 259201LL) > 0x7935041FDLL )
  {
    result = sub_46CE38(SHIDWORD(v5), a4, a3, a4);
    if ( !result )
    {
      v7 = *a3;
      if ( v26 && sub_47B397(SHIDWORD(v7), v7, a3) )
      {
        v8 = v25 + v27;
        a3[8] = 1;
      }
      else
      {
        v8 = v27;
      }
      v9 = v7 - v8;
      v10 = sub_463400(v9, 60);
      *a3 = v10;
      if ( v10 < 0 )
      {
        *a3 = v10 + 60;
        v9 -= 60LL;
      }
      LODWORD(v11) = sub_462A90(v9, 60);
      v12 = a3[1] + v11;
      v13 = sub_463400(v12, 60);
      a3[1] = v13;
      if ( v13 < 0 )
      {
        a3[1] = v13 + 60;
        v12 -= 60LL;
      }
      LODWORD(v14) = sub_462A90(v12, 60);
      v15 = a3[2] + v14;
      v16 = sub_463400(v15, 24);
      a3[2] = v16;
      if ( v16 < 0 )
      {
        a3[2] = v16 + 24;
        v15 -= 24LL;
      }
      LODWORD(v17) = sub_462A90(v15, 24);
      v18 = v17;
      if ( v17 < 0 )
      {
        v20 = a3[6] + 7;
        a3[3] += v18;
        v21 = (v18 + v20) % 7;
        v22 = a3[3];
        a3[6] = v21;
        v23 = v18 + a3[7];
        if ( v22 > 0 )
        {
          a3[7] = v23;
        }
        else
        {
          a3[4] = 11;
          --a3[5];
          a3[3] = v22 + 31;
          a3[7] = v23 + 365;
        }
      }
      else if ( v17 > 0 )
      {
        v19 = v17 + a3[6];
        a3[3] += v18;
        a3[7] += v18;
        a3[6] = v19 % 7;
      }
      return 0;
    }
  }
  else
  {
    v6 = v5 - v27;
    v24 = v6;
    result = sub_46CE38(SHIDWORD(v6), a4, a3, (int)&v24);
    if ( !result )
    {
      if ( !v26 || !sub_47B397(SHIDWORD(v6), a4, a3) )
        return 0;
      v24 -= v25;
      result = sub_46CE38(SHIDWORD(v6), a4, a3, (int)&v24);
      if ( !result )
      {
        a3[8] = 1;
        return 0;
      }
    }
  }
  return result;
}
// 46D07A: conditional instruction was optimized away because edx.4==0
// 46D07C: conditional instruction was optimized away because edx.4==0
// 46CFFA: variable 'v11' is possibly undefined
// 46D02F: variable 'v14' is possibly undefined
// 46D05A: variable 'v17' is possibly undefined
