__int64 __fastcall sub_935670(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // r12
  _DWORD **v5; // r15
  _DWORD **v6; // r12
  _DWORD *v7; // r14
  void *v8; // rbp
  void *v9; // rbx
  void *v11; // rdi
  bool v12; // al
  bool v13; // al
  __int64 v15; // [rsp+28h] [rbp-80h]
  _QWORD v16[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v18[2]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v19[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 8LL * a2) + 80LL * a3;
  v16[0] = 0;
  v15 = v4 + 8;
  v16[1] = 0;
  v17[0] = 1;
  v17[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v16, (int *)(v4 + 8));
  v18[0] = 0;
  v18[1] = 0;
  v19[0] = 1;
  v19[1] = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v18, (int *)(v4 + 40));
  sub_1831620(qword_1C7F2C0, v16);
  sub_1831620(qword_1C7F2C0, v18);
  v5 = *(_DWORD ***)(v4 + 72);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v6 != v5 )
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8848LL) + (unsigned int)(2 * **v5)) )
          goto LABEL_6;
        if ( a2 != v7[1] )
        {
          if ( sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v7 + 4), (__int64)v16)
            || ((v11 = qword_1C7F2C0, (v7[5] & 1) == 0) && (v16[0] & 0x100000000LL) == 0
              ? (v12 = v7[4] == LODWORD(v16[0]))
              : (v11 = qword_1C7F2C0, v12 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v7 + 4, v16) == 0),
                v12
             && ((v7[9] & 1) != 0 || (v17[0] & 0x100000000LL) != 0
               ? (v13 = (unsigned int)sub_182C7B0(v11, v7 + 8, v17) == 0)
               : (v13 = v7[8] == LODWORD(v17[0])),
                 v13 && sub_3ED700((__int64)qword_1C7F2C0, (__int64)(v7 + 12), (__int64)v18))) )
          {
            ++*(_DWORD *)(a1 + 196);
            sub_935240(a1, 2 * *v7 + 1, a2, a3);
          }
          goto LABEL_6;
        }
        if ( sub_927C80((__int64)(v7 + 4), v15) )
        {
LABEL_6:
          if ( ++v5 == v6 )
            break;
        }
        else
        {
          ++*(_DWORD *)(a1 + 196);
          sub_935240(a1, 2 * *v7, a2, a3);
          if ( ++v5 == v6 )
            break;
        }
      }
    }
  }
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v18);
  sub_182CBA0(v8, v19);
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v16);
  return sub_182CBA0(v9, v17);
}

