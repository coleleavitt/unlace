__int64 sub_3D6B00()
{
  unsigned int v0; // ebx
  int v2[4]; // [rsp+0h] [rbp-48h] BYREF
  int v3[2]; // [rsp+10h] [rbp-38h]
  int v4; // [rsp+20h] [rbp-28h]
  __int64 v5; // [rsp+30h] [rbp-18h]

  v0 = sub_3D68E0(*(_QWORD *)(qword_2CCB598 + 1672), 0, 0, 0, 0, v4, __readfsqword(0x28u), v5);
  if ( *(_QWORD *)v3 )
    (*(void (__fastcall **)(int *, int *, __int64))v3)(v2, v2, 3);
  return v0;
}
