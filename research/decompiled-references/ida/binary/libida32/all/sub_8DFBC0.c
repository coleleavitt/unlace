unsigned __int64 __fastcall sub_8DFBC0(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 24);
  v2 = v1 + 0x27D4EB2F165667C5LL;
  if ( *(_QWORD *)a1 > 0x1Fu )
    v2 = 0x9E3779B185EBCA87LL
       * ((0x9E3779B185EBCA87LL
         * ((0x85EBCA77C2B2AE63LL
           - 0x61C8864E7A143579LL
           * ((0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * *(_QWORD *)(a1 + 16), 31))
            ^ (0x9E3779B185EBCA87LL
             * ((0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * *(_QWORD *)(a1 + 8), 31))
              ^ (__ROL8__(v1, 12)
               + __ROL8__(*(_QWORD *)(a1 + 16), 7)
               + __ROL8__(*(_QWORD *)(a1 + 8), 1)
               + __ROL8__(*(_QWORD *)(a1 + 32), 18)))
             - 0x7A1435883D4D519DLL)))
          ^ (0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * v1, 31)))
         - 0x7A1435883D4D519DLL)
        ^ (0x9E3779B185EBCA87LL * __ROL8__(0xC2B2AE3D27D4EB4FLL * *(_QWORD *)(a1 + 32), 31)))
       - 0x7A1435883D4D519DLL;
  return sub_8DF6A0(*(_QWORD *)a1 + v2, (unsigned int *)(a1 + 40), *(_QWORD *)a1);
}

