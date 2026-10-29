__int64 __fastcall sub_747920(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *v5; // rcx
  unsigned __int64 v6; // rdx
  int v8; // [rsp+Ch] [rbp-2Ch] BYREF
  int v9; // [rsp+10h] [rbp-28h] BYREF
  int v10; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v5 = (const char *)&qword_2CAA5C0;
  v11 = __readfsqword(0x28u);
  v8 = 0;
  v6 = (unsigned __int8)*qword_2CAA5C0;
  if ( (_BYTE)v6 == 76 )
  {
    ++qword_2CAA5C0;
    v8 = sub_747440(0, (__int64)a2, v6, (unsigned __int64)&qword_2CAA5C0, a5);
  }
  else
  {
    if ( (_BYTE)v6 != 80 )
      return sub_747580(nullptr, a2, v6, v5, a5);
    ++qword_2CAA5C0;
    v9 = sub_747580(nullptr, a2, v6, (const char *)&qword_2CAA5C0, a5);
    sub_74F810(&v10, 544106784, 4);
    a2 = (unsigned int *)&v9;
    v8 = sub_750E60(&v10, &v9);
    if ( (dword_2CAA5CC & 0xA0) != 0 )
      return sub_747580(nullptr, a2, v6, v5, a5);
  }
  v9 = sub_747580(nullptr, a2, v6, v5, a5);
  v10 = sub_750E60(&v9, &v8);
  return sub_752830(&v10);
}

