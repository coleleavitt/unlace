__int64 __fastcall create_data(__int64 *a1, __int64 a2, char *a3, void *a4)
{
  unsigned int v4; // ebx
  int v6[4]; // [rsp+0h] [rbp-48h] BYREF
  int v7[2]; // [rsp+10h] [rbp-38h]
  int v8[2]; // [rsp+18h] [rbp-30h]
  int v9[2]; // [rsp+28h] [rbp-20h]

  *(_QWORD *)v9 = __readfsqword(0x28u);
  *(_OWORD *)v6 = 0;
  *(_QWORD *)v7 = 0;
  *(_QWORD *)v8 = 0;
  v4 = sub_3D4400(*(__int64 **)(qword_2CCB598 + 1672), a1, a2, a3, a4, (const __m128i *)v6);
  if ( *(_QWORD *)v7 )
    (*(void (__fastcall **)(int *, int *, __int64))v7)(v6, v6, 3);
  return v4;
}
