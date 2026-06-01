__int64 __fastcall sub_599780(__int64 a1, __int64 a2)
{
  void *v3; // rbp
  unsigned __int64 *v5; // rax
  int v6; // eax
  _QWORD *v7; // rdi
  int v8; // r12d
  int v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  int v12[4]; // [rsp+0h] [rbp-1B8h] BYREF
  int v13[2]; // [rsp+10h] [rbp-1A8h]
  int v14[2]; // [rsp+18h] [rbp-1A0h]
  int v15[4]; // [rsp+20h] [rbp-198h] BYREF
  __int64 v16; // [rsp+30h] [rbp-188h]
  __int64 v17; // [rsp+38h] [rbp-180h]
  __int64 v18; // [rsp+40h] [rbp-178h]
  char v19; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v20; // [rsp+188h] [rbp-30h] BYREF

  v20 = __readfsqword(0x28u);
  v3 = (void *)sub_3BDE50(*(_QWORD **)(a1 + 16), a2);
  if ( (~((unsigned __int16)sub_3BE900(*(_QWORD **)(a1 + 16), (unsigned __int64)v3, 4) >> 8) & 6) == 0 )
  {
    v16 = -1;
    v5 = (unsigned __int64 *)&v19;
    v17 = 0;
    v18 = 0;
    *(_OWORD *)v15 = -1;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 5;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *(v5 - 2) = 0;
    }
    while ( &v20 != v5 );
    v6 = sub_573F40(*(__int64 **)(a1 + 16), (__int64)v15, v3);
    v7 = *(_QWORD **)(a1 + 16);
    v8 = v6;
    if ( v6 )
    {
      v9 = sub_3C1F00(v7, (unsigned __int64)v3);
      v10 = (unsigned __int64)v3 + v8;
      if ( v9 != v10 )
      {
        if ( v9 < v10 )
        {
          v11 = *(_QWORD *)(a1 + 16);
          *(_OWORD *)v12 = 0;
          *(_QWORD *)v13 = 0;
          *(_QWORD *)v14 = 0;
          sub_3D19E0(v11, v9);
        }
        sub_3D68E0(*(_QWORD *)(a1 + 16), 0, 0, 0, 0, v15[0], v15[2], v16);
        if ( *(_QWORD *)v13 )
          (*(void (__fastcall **)(int *, int *, __int64))v13)(v12, v12, 3);
      }
    }
    else
    {
      *(_OWORD *)v12 = 0;
      *(_QWORD *)v13 = 0;
      *(_QWORD *)v14 = 0;
      sub_3D19E0((_DWORD)v7, (_DWORD)v3);
    }
  }
  return 0;
}
