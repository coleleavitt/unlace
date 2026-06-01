__int64 __fastcall sub_769BC0(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  char *v5; // rcx
  char v6; // bl
  __int64 result; // rax
  int v8; // [rsp+4h] [rbp-34h] BYREF
  int v9; // [rsp+8h] [rbp-30h] BYREF
  int v10; // [rsp+Ch] [rbp-2Ch] BYREF
  _BYTE v11[4]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int16 v12; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int8 v13; // [rsp+17h] [rbp-21h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v5 = qword_2CD44C0++;
  v6 = *v5;
  switch ( *v5 )
  {
    case 'C':
    case 'F':
    case 'I':
    case 'O':
    case 'P':
    case 'V':
    case 'Z':
    case 'v':
      qword_2CD44C0 = v5;
      result = sub_769F20(1);
      break;
    case 'E':
    case 'e':
      if ( (_BYTE)a1 )
        sub_76E6C0(a1, a2, &qword_2CD44C0, v5);
      v9 = 0;
      v8 = sub_767D10(a1, a2, (__int64)&qword_2CD44C0, (__int64)v5, a5);
      if ( v6 == 101 )
        v9 = sub_7694F0();
      v10 = sub_769BC0(1);
      if ( (dword_2CD44CC & 0xA0) == 0 )
      {
        sub_76FA20(v11, "(extension", 10);
        sub_76FCD0(&v12, 544106784, 4);
        sub_770B70(v11, &v12);
        sub_770B70(v11, &v8);
        sub_770730(v11, 14889);
        v10 = sub_771320(v11, &v10);
      }
      result = sub_771320(&v10, &v9);
      break;
    case 'G':
      result = sub_76A710();
      break;
    case 'S':
      result = sub_767690(a1, (__int64)a2, (__int64)&qword_2CD44C0, v5, a5);
      break;
    case 's':
      sub_76FA20(&v12, "Swift", 5);
      result = (v13 << 24) | v12 | 0x400000u;
      break;
    default:
      qword_2CD44C0 = v5;
      result = sub_767D10(a1, a2, (__int64)&qword_2CD44C0, (__int64)v5, a5);
      break;
  }
  return result;
}
