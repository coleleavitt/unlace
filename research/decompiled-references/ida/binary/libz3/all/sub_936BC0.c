__int64 __fastcall sub_936BC0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  int **v6; // r15
  void *v7; // rdi
  int **i; // rbx
  int *v9; // r13
  unsigned int v10; // esi
  int v11; // esi
  __int64 v13; // [rsp+10h] [rbp-68h]
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[9]; // [rsp+30h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * a2) + 48LL * a3;
  v15[0] = 0;
  v13 = v5 + 8;
  v15[1] = 0;
  v16[0] = 1;
  v16[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v15, (int *)(v5 + 8));
  sub_1831620(qword_1C7F2C0, v15);
  v6 = *(int ***)(v5 + 40);
  v7 = qword_1C7F2C0;
  if ( v6 )
  {
    for ( i = &v6[*((unsigned int *)v6 - 1)]; v6 != i; ++v6 )
    {
      v9 = *v6;
      v10 = 2 * **v6;
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + v10) )
        continue;
      if ( a2 == v9[1] )
      {
        if ( !sub_3ED700((__int64)v7, (__int64)(v9 + 4), v13) )
        {
          v11 = *v9;
          ++*(_DWORD *)(a1 + 132);
          sub_936790(a1, 2 * v11, a2, a3);
        }
        goto LABEL_7;
      }
      if ( (v9[9] & 1) != 0 || v9[8] != 1 || (v16[0] & 0x100000000LL) != 0 || LODWORD(v16[0]) != 1 )
      {
        if ( (unsigned __int8)sub_1848D40(v7, v9 + 4, v15) )
          goto LABEL_19;
      }
      else
      {
        if ( (v9[5] & 1) == 0 && (v15[0] & 0x100000000LL) == 0 )
        {
          if ( v9[4] >= SLODWORD(v15[0]) )
            continue;
          goto LABEL_20;
        }
        if ( (int)sub_182C7B0(v7, v9 + 4, v15) < 0 )
        {
LABEL_19:
          v10 = 2 * *v9;
LABEL_20:
          ++*(_DWORD *)(a1 + 132);
          sub_936790(a1, v10 + 1, a2, a3);
        }
      }
LABEL_7:
      v7 = qword_1C7F2C0;
    }
  }
  sub_182CBA0(v7, v15);
  return sub_182CBA0(v7, v16);
}

