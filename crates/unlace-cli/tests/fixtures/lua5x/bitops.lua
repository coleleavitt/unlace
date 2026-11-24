local a, b = ...
local x = (a & 0xff) | (b << 4)
x = x ~ (a >> 2) // 3
return ~x
