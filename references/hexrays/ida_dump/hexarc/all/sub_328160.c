__int64 __fastcall sub_328160(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // al
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rbx
  unsigned int v8; // ebx
  unsigned __int64 *v10; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v4 = *(_BYTE *)(a1 + 8);
  v14 = __readfsqword(0x28u);
  if ( v4 == 1 )
    return sub_5E4E0((_QWORD *)a3, *(_DWORD *)a1, a4);
  v6 = a4;
  if ( v4 != 5 )
    sub_321610(a1, a2, a3);
  v7 = *(_QWORD *)a1 + *(_QWORD *)(a2 + 1440);
  v11[0] = 0;
  v13 = 0;
  v11[1] = 0;
  v12 = 0;
  if ( a4 + v7 - 1 >= v7 )
  {
    v12 = qvector_reserve(&v12, 0, 1, 16);
    v10 = (unsigned __int64 *)(16 * v13 + v12);
    *v10 = v7;
    v10[1] = v6;
    *(_QWORD *)&v13 = v13 + 1;
  }
  v8 = sub_5E200((_QWORD *)a3, v11);
  if ( !(_BYTE)v8 )
    v8 = sub_3110F0((unsigned __int64 **)(a3 + 16), (__int64)&v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12);
  }
  qfree(v11[0]);
  return v8;
}
