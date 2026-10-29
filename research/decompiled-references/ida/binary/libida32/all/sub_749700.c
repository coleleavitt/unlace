__int64 __fastcall sub_749700(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5)
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
  v5 = qword_2CAA5C0++;
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
      qword_2CAA5C0 = v5;
      result = sub_749A60(1);
      break;
    case 'E':
    case 'e':
      if ( (_BYTE)a1 )
        sub_74E200(a1, a2, &qword_2CAA5C0, v5);
      v9 = 0;
      v8 = sub_747850(a1, a2, (__int64)&qword_2CAA5C0, (__int64)v5, a5);
      if ( v6 == 101 )
        v9 = sub_749030();
      v10 = sub_749700(1);
      if ( (dword_2CAA5CC & 0xA0) == 0 )
      {
        sub_74F560(v11, "(extension", 10);
        sub_74F810(&v12, 544106784, 4);
        sub_7506B0(v11, &v12);
        sub_7506B0(v11, &v8);
        sub_750270(v11, 14889);
        v10 = sub_750E60(v11, &v10);
      }
      result = sub_750E60(&v10, &v9);
      break;
    case 'G':
      result = sub_74A250();
      break;
    case 'S':
      result = sub_7471D0(a1, (__int64)a2, (__int64)&qword_2CAA5C0, v5, a5);
      break;
    case 's':
      sub_74F560(&v12, "Swift", 5);
      result = (v13 << 24) | v12 | 0x400000u;
      break;
    default:
      qword_2CAA5C0 = v5;
      result = sub_747850(a1, a2, (__int64)&qword_2CAA5C0, (__int64)v5, a5);
      break;
  }
  return result;
}

